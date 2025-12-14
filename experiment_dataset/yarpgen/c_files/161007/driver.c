#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5054462600420295644LL;
unsigned int var_3 = 4288997847U;
unsigned int var_4 = 412457412U;
short var_5 = (short)4744;
short var_7 = (short)-10949;
signed char var_9 = (signed char)68;
int zero = 0;
signed char var_12 = (signed char)38;
signed char var_13 = (signed char)-21;
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
