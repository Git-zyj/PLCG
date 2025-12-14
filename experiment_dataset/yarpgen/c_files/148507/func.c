/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148507
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */signed char) var_9);
    var_14 |= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(signed char)8] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(11919816939341498922ULL)));
        var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 127U))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
        {
            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_10)))) ? (((6526927134368052698ULL) / (12467270957642896949ULL))) : (11919816939341498917ULL)));
            var_17 = ((/* implicit */long long int) (signed char)47);
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] [(signed char)10] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4088ULL) : (var_3)))))))));
            var_18 -= ((/* implicit */unsigned char) ((int) arr_0 [i_0] [i_2]));
        }
        arr_11 [(_Bool)1] |= ((/* implicit */short) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (-(11U)));
        var_20 -= ((/* implicit */long long int) var_12);
        var_21 *= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)93))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-27237)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(arr_12 [i_3])))))) : (((long long int) (signed char)109)))))));
    }
    var_23 &= ((/* implicit */signed char) var_2);
    var_24 = ((/* implicit */unsigned long long int) var_10);
}
