#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4509647458796180150LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 16862082077961134125ULL;
long long int var_14 = 6297881857504672416LL;
short var_16 = (short)-27821;
int var_17 = 1968551031;
unsigned char var_18 = (unsigned char)71;
int zero = 0;
unsigned char var_20 = (unsigned char)221;
unsigned long long int var_21 = 11389955504010575886ULL;
int var_22 = 1415695401;
signed char var_23 = (signed char)68;
unsigned char var_24 = (unsigned char)132;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
