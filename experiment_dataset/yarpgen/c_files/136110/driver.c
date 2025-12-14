#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -412834663856803046LL;
signed char var_3 = (signed char)-44;
signed char var_4 = (signed char)94;
unsigned long long int var_5 = 18085092083624002465ULL;
long long int var_7 = -4724182630789636401LL;
long long int var_8 = 8836549506719808639LL;
unsigned long long int var_9 = 3755864731084690177ULL;
unsigned char var_10 = (unsigned char)121;
int zero = 0;
unsigned long long int var_11 = 16251757548768827426ULL;
long long int var_12 = 5682329396843768816LL;
signed char var_13 = (signed char)104;
unsigned char var_14 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
