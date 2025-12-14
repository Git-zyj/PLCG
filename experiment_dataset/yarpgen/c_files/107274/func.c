/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107274
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
    var_10 = ((/* implicit */unsigned int) max(((((~(((/* implicit */int) (unsigned char)5)))) & ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */short) (unsigned char)251);
            arr_4 [i_0] [i_0] = (!(((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) max(((unsigned char)64), ((unsigned char)251)))) : (((/* implicit */int) var_3))))));
        }
        for (long long int i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [5ULL] = ((/* implicit */unsigned short) arr_3 [i_0] [i_2] [i_0]);
            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_6 [i_2 + 1] [i_0] [i_0])), (var_2))), (((/* implicit */unsigned short) var_8)))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned short) ((((var_3) ? (4076162857U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_3 [i_0] [i_3] [i_3]))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)251)) % (((/* implicit */int) (short)11926)))) > (arr_12 [i_3] [i_3] [i_3])));
        }
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_17 [8U] [i_4] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) -1346497737)), (-2243131148957032657LL)))))), ((+(((arr_1 [i_4] [i_0]) - (((/* implicit */unsigned long long int) 1035662069))))))));
            var_15 = ((/* implicit */signed char) arr_6 [i_0] [(_Bool)1] [(_Bool)1]);
        }
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (2656608288U) : (max((((/* implicit */unsigned int) -20)), (max((752128471U), (arr_0 [i_0])))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_28 [i_7] [10] [i_5 - 1] = arr_21 [i_5] [i_5];
                    var_17 = ((/* implicit */unsigned char) (short)11914);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) (unsigned char)251);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1] [(unsigned char)11]))));
    }
    var_20 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    var_21 = ((/* implicit */int) ((_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)90)))), (((/* implicit */int) var_2)))));
    var_22 = ((/* implicit */unsigned char) var_2);
}
