/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111234
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((-2147483627) + (2147483647))) >> (((/* implicit */int) (unsigned short)0)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((var_1) | (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)65535)))))));
    var_14 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)0)))) << (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)31737))))))), (min((arr_2 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))))))));
                var_16 = ((/* implicit */unsigned short) ((signed char) ((((((((/* implicit */_Bool) (unsigned short)65517)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) (unsigned short)33805)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_3 [i_0] [i_0]))) - (50614ULL))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_10 [23LL] [23LL] [i_2] [i_3])) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */int) arr_0 [i_2 - 1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))));
                            var_18 *= ((unsigned int) (!(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)2))))));
                            arr_11 [i_2] [i_1] [i_2 - 1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_2] [i_3])) < (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_2 - 1] [i_2]))))), (max(((unsigned short)18), ((unsigned short)65534)))));
                            arr_12 [i_2] [i_1] [i_2] [i_2 - 1] [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)65529)))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(unsigned char)18])) || (((/* implicit */_Bool) 1234979840U)))))))));
                            var_19 = ((/* implicit */signed char) ((_Bool) (unsigned short)23));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) -1508648589)) ? (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_1]), (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 3059987455U)) : (arr_3 [i_0] [(short)15]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((min((((arr_4 [i_4] [i_5]) / (((/* implicit */int) arr_5 [i_4])))), (((/* implicit */int) max((arr_10 [i_5] [i_5] [5] [i_5]), (((/* implicit */short) arr_17 [i_5] [i_5] [i_5]))))))), (((((/* implicit */_Bool) min((arr_5 [i_5]), ((unsigned short)0)))) ? ((~(arr_4 [i_4] [i_5]))) : (((/* implicit */int) arr_10 [i_5] [i_5 - 1] [i_5 - 1] [i_4]))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_18 [i_4] [i_5])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17408)) ^ (((/* implicit */int) arr_0 [i_5]))))) | (((arr_3 [i_4] [i_4]) | (((/* implicit */unsigned long long int) arr_8 [i_5] [24] [i_4] [(short)20])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) (signed char)63))), (max((((/* implicit */int) arr_5 [i_4])), (-1666821093))))))));
                var_23 = ((/* implicit */short) -1382893556);
            }
        } 
    } 
}
