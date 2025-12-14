#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
unsigned long long int var_2 = 8687977307148655028ULL;
unsigned long long int var_4 = 7063013715417890155ULL;
signed char var_7 = (signed char)103;
signed char var_8 = (signed char)-27;
long long int var_9 = -3835858772669981151LL;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)-29;
int zero = 0;
signed char var_19 = (signed char)67;
unsigned short var_20 = (unsigned short)44230;
unsigned long long int var_21 = 4372044375414164300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
