#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 605548299U;
unsigned short var_5 = (unsigned short)2208;
int var_6 = 1532780717;
signed char var_7 = (signed char)-116;
unsigned int var_8 = 1240032735U;
unsigned int var_9 = 3397439541U;
unsigned long long int var_10 = 4941647119084271380ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-97;
unsigned long long int var_13 = 7991166393763225860ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
