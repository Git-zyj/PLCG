#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6064625965812936171LL;
unsigned char var_4 = (unsigned char)197;
long long int var_5 = 5980861434607934603LL;
long long int var_6 = 8998742845573996445LL;
unsigned char var_7 = (unsigned char)224;
long long int var_8 = -609586745619424182LL;
long long int var_9 = -2379839372103694806LL;
long long int var_13 = -8284107723398408841LL;
int zero = 0;
long long int var_20 = -5039915797590607613LL;
unsigned char var_21 = (unsigned char)68;
unsigned char var_22 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
