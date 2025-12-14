/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167361
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) max(((((~(var_0))) >> ((((~(var_13))) - (3517651334245329954LL))))), (((/* implicit */unsigned int) arr_0 [i_3]))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((arr_4 [i_0] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))))))) & (arr_2 [i_3 - 2] [i_2] [i_1])));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2046))) & ((~(446243867U)))))) % ((~(max((18116887762840919079ULL), (((/* implicit */unsigned long long int) var_11))))))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (+((~(10996180423246485044ULL)))))) ? (max(((+(var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_10)))) : ((-(((/* implicit */int) var_5))))))))))));
                        var_21 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (signed char)93)) ? (arr_4 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_4]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_4] [i_0])))))));
                        var_22 = ((/* implicit */unsigned short) (((~(((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_8))))) / (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        arr_16 [i_4] = ((/* implicit */unsigned char) var_15);
                    }
                    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) max((10996180423246485046ULL), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)9954))) * (2862725698U))))))));
                        var_23 = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) (unsigned short)65534)) ? (778872160846262871ULL) : (((/* implicit */unsigned long long int) 2365307496U)))))), (((/* implicit */unsigned long long int) ((int) var_7)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 11; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_24 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((10996180423246485047ULL) == (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_0] [i_6] [i_7 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1929659782U)) ? (((/* implicit */int) arr_9 [i_7 - 1] [i_6 - 2] [i_2] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)4123))))) : (max((1929659812U), (((/* implicit */unsigned int) (unsigned short)13348)))))))));
                                var_25 += ((/* implicit */unsigned long long int) var_7);
                                var_26 = ((((/* implicit */int) (!(((/* implicit */_Bool) 17179803648LL))))) % (((((/* implicit */int) ((var_0) >= (((/* implicit */unsigned int) -1))))) - (((((/* implicit */int) var_10)) & (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7450563650463066598ULL))));
                }
            } 
        } 
    } 
    var_27 &= ((/* implicit */unsigned short) (~(((unsigned long long int) (~(((/* implicit */int) (signed char)-99)))))));
}
