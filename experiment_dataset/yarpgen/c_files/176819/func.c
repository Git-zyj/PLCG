/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176819
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) 3523550475U);
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= (((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)0)))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57630))) < (4194303ULL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-421509677390454144LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5858)) ? (409950480) : (((/* implicit */int) arr_4 [i_2 - 1])))))));
        var_12 = ((/* implicit */unsigned short) arr_0 [i_2]);
    }
    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_13 &= ((/* implicit */unsigned char) ((var_7) - (arr_9 [i_3 + 1])));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_0 [7LL]))));
            var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4] [12ULL])) ? ((~(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (!(var_3))))));
        }
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [(signed char)14])) <= (((((/* implicit */_Bool) arr_0 [i_3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) % (var_6)));
    }
}
