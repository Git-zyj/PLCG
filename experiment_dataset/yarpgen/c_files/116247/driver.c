#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)39;
long long int var_7 = 8923696739322579970LL;
unsigned short var_11 = (unsigned short)18700;
int zero = 0;
short var_16 = (short)28741;
signed char var_17 = (signed char)-45;
signed char var_18 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
