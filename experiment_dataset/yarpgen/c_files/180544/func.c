/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180544
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 += max(((~(((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_16)) : (arr_1 [7U]))))), ((+(((/* implicit */int) (unsigned short)28778)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 -= ((/* implicit */long long int) var_4);
                        arr_10 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (((~(arr_6 [i_0] [i_0]))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (var_9)))) : ((~(var_10))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6))), ((~(var_6)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) ((unsigned short) var_5))), (((int) -3700608617089018078LL)))));
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (var_13)))))) ? (((/* implicit */long long int) max((max((var_15), (var_13))), (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_4))))))) : (max((((/* implicit */long long int) var_11)), (arr_7 [i_0] [i_1] [i_2] [i_4])))));
                    }
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                        var_22 ^= ((/* implicit */signed char) var_10);
                        arr_19 [i_0] [i_0] [6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_8))))) ? (max((((((/* implicit */_Bool) 318281697)) ? (var_10) : (((/* implicit */int) (unsigned char)88)))), (max((((/* implicit */int) var_5)), (var_9))))) : (((/* implicit */int) max((max((var_8), (((/* implicit */short) (_Bool)0)))), (((/* implicit */short) var_4)))))));
                        var_23 = ((/* implicit */long long int) ((7822176937925356081ULL) << (((((/* implicit */int) (unsigned short)1984)) - (1938)))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_22 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_11)) == (var_10))))))), (max((((/* implicit */long long int) var_3)), (var_7)))));
                            var_24 = ((/* implicit */short) var_15);
                        }
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((-5797738885655872418LL), (((/* implicit */long long int) (unsigned char)246))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (max((2255922384U), (((/* implicit */unsigned int) var_11))))))) + (((long long int) (+(((/* implicit */int) var_4)))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                        }
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [(unsigned char)9] [i_0] [(signed char)12] [i_1] [i_0] = ((/* implicit */_Bool) 1407242442U);
                            arr_31 [i_0] [i_8] [i_1] [i_5] [i_8] = ((/* implicit */long long int) ((unsigned char) var_4));
                        }
                    }
                    var_26 = ((/* implicit */int) var_6);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((unsigned char) var_17))))) : ((+(((((/* implicit */_Bool) -318281698)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))))));
}
