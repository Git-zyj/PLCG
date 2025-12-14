/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163193
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_17);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((unsigned short) ((long long int) var_0))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) / (var_14))) - (((((/* implicit */_Bool) arr_8 [i_3] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_2] [i_3] [i_4]))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3126587582479192565LL)) ? (var_4) : (var_15)))) ? (((long long int) 3126587582479192565LL)) : (((/* implicit */long long int) ((((/* implicit */int) var_17)) & (372479653)))))))));
                            var_21 += ((/* implicit */unsigned int) (!(var_6)));
                        }
                        for (int i_5 = 2; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_22 &= ((/* implicit */long long int) ((((/* implicit */int) var_7)) | (arr_5 [i_1] [i_1])));
                            arr_17 [i_0 + 3] [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((((-1) / (((/* implicit */int) var_0)))) >= (((var_7) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_10 [i_0 + 3] [i_1] [i_0 + 3] [i_3]))))));
                        }
                        for (int i_6 = 2; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_1] [i_3] [i_6]))) % (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_6])))))));
                            arr_20 [i_3 - 1] [i_3 - 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_6] [i_3] [i_2] [i_1] [i_0]);
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((long long int) arr_9 [i_0] [i_2 - 1] [(unsigned short)21] [i_2] [i_3 + 2])))));
                        }
                        for (int i_7 = 2; i_7 < 21; i_7 += 1) /* same iter space */
                        {
                            var_25 &= ((/* implicit */int) ((unsigned short) (~(3126587582479192565LL))));
                            arr_23 [i_0 - 2] [i_1] [i_2] [i_2] [i_3] [i_7] = ((/* implicit */short) 372479653);
                            var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_14 [i_7 - 2] [i_2 + 1] [i_2 + 1] [i_3] [i_7] [i_7]));
                        }
                        var_27 = ((/* implicit */short) ((((arr_1 [i_0 + 3]) + (2147483647))) << ((((~(((/* implicit */int) arr_7 [i_0])))) - (77)))));
                        var_28 = ((/* implicit */short) ((long long int) arr_16 [i_3 - 2] [i_1] [i_0 - 2]));
                        var_29 += ((/* implicit */signed char) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)49362))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */int) (unsigned short)16143);
}
