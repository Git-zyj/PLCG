/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100401
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
    var_11 = ((/* implicit */long long int) var_4);
    var_12 = ((/* implicit */_Bool) (short)-22530);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 += ((unsigned char) min((((((/* implicit */int) (unsigned short)7687)) ^ (((/* implicit */int) arr_3 [13LL])))), (((/* implicit */int) (unsigned char)12))));
                            var_14 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((_Bool) var_4))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [1ULL] = ((((((/* implicit */int) ((1744936664) <= (((/* implicit */int) arr_4 [i_0]))))) == (((int) arr_9 [i_0] [(unsigned short)11] [(unsigned short)11] [i_3])))) ? (((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)41887)))) & (min((arr_7 [i_0] [i_2]), (((/* implicit */int) (unsigned char)178)))))) : (min((((/* implicit */int) (short)-27218)), (((((/* implicit */int) var_2)) + (((/* implicit */int) (short)-451)))))));
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_4)) ? (var_8) : (0)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)65532))) ? (((arr_0 [(unsigned char)3] [(unsigned char)3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)10])))))));
                            var_15 = ((/* implicit */unsigned short) arr_4 [i_0 - 1]);
                        }
                    } 
                } 
                var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */int) ((signed char) (signed char)107))) : ((~(((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 23; i_4 += 2) 
    {
        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            {
                var_18 += ((/* implicit */signed char) min((arr_14 [i_4 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4] [i_5 + 3] [i_5 + 3])) - (((/* implicit */int) arr_15 [i_4] [i_4] [i_5])))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((-1), ((+(((/* implicit */int) (short)22531))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [i_5 + 1])))) : (((((/* implicit */_Bool) ((unsigned char) var_4))) ? ((~(arr_14 [i_4 - 2]))) : (min((arr_14 [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4 + 2])))))))))));
                var_20 *= ((/* implicit */signed char) arr_18 [i_4] [i_5]);
                var_21 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_4]))));
                arr_19 [i_4] [i_5] [i_5 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4 + 2])) | (((/* implicit */int) arr_13 [i_4 + 2]))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_18 [(signed char)20] [(signed char)20])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 33538048)))))));
            }
        } 
    } 
}
