/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15579
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 12428772741541365510ULL)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 403957198)) ? (var_12) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) -2147483633)) ? (1880079939) : (403957198)))))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */int) (unsigned short)21969))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */_Bool) var_2)) ? (12428772741541365510ULL) : (((/* implicit */unsigned long long int) var_2)))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_16 *= ((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2004372083)))))));
                            var_17 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_3] [(unsigned short)9] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) max((arr_4 [i_3] [i_1] [i_0]), (arr_4 [17] [i_1] [i_2])))) : (min((var_9), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_2] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) != (((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned long long int) var_2)) : (var_9)))))) % (((((/* implicit */int) var_1)) * (max((var_5), (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_9 [i_4]);
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((!(((/* implicit */_Bool) 403957198)))) ? ((((+(16207075796051662367ULL))) << (((((((/* implicit */_Bool) -2004372099)) ? (arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */int) (_Bool)1)))) + (1067623403))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [20ULL] [i_4] [i_4] [i_4] [(_Bool)0])) <= ((+(15760440703496243725ULL))))))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_20 [i_6] [i_7] = ((/* implicit */unsigned char) arr_11 [i_4]);
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_1);
                            arr_24 [i_4] [i_5] [i_6] [i_7] [3] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(12428772741541365496ULL))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 25U)) % (14647548196508179158ULL)));
                            var_23 &= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((-306785151) / (((/* implicit */int) (unsigned char)238))))), (((((/* implicit */unsigned long long int) var_7)) / (arr_14 [i_4] [i_5] [i_5])))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 4294967285U))) << (((((/* implicit */int) (unsigned short)65535)) - (65530)))))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_8 [14ULL] [i_5] [i_6] [i_5] [i_5])) * (12428772741541365505ULL))) - (((/* implicit */unsigned long long int) ((((int) 2239668277657889237ULL)) + ((-(((/* implicit */int) arr_17 [i_8] [i_5] [i_5]))))))))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            arr_29 [i_4] [i_4] [i_6] [i_7] [i_4] [9ULL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 993612653)) ? (((/* implicit */unsigned int) var_5)) : (arr_28 [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1] [i_6] [i_6] [i_6])));
                            arr_30 [i_6] [8] [i_7] [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)250);
                            var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) -339773171))));
                        }
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4] [(_Bool)1] [i_4] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((-523029913) + (2004372079)))))) : (arr_2 [i_6]))))));
                        arr_31 [i_7] [i_6] [i_7] [i_7] [i_6] [i_6] = (unsigned char)2;
                        arr_32 [i_7] [i_6] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)12916);
                    }
                } 
            } 
        } 
        var_27 = arr_19 [i_4];
    }
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_7)))))) ? (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */unsigned long long int) var_14)) : (var_4))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_4))), (((/* implicit */unsigned long long int) var_2)))))))));
}
