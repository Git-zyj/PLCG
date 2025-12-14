/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13508
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
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (arr_3 [i_0] [i_0] [i_1]))), (((arr_4 [i_0] [i_1] [i_1]) << (((((/* implicit */int) (unsigned short)60001)) - (59976)))))))) ? (min((246088872980590168LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_8))) << (((((((/* implicit */_Bool) ((unsigned short) var_10))) ? ((~(((/* implicit */int) (signed char)86)))) : (((/* implicit */int) arr_6 [i_0])))) + (99)))));
                            var_15 |= ((/* implicit */signed char) min((13167197166182370413ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_0), (((/* implicit */int) var_9))))), (((unsigned int) (short)32174)))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) min(((~(var_3))), (min((1293356528), (((/* implicit */int) (signed char)-87))))))) : (((((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (signed char)88))))) | (arr_5 [i_0] [(_Bool)1] [i_2] [i_3])))));
                            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (0ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_18 -= ((/* implicit */short) ((((min((((/* implicit */unsigned long long int) var_3)), (var_2))) < (((/* implicit */unsigned long long int) var_3)))) ? (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) != (arr_5 [i_4] [(unsigned short)7] [i_4] [i_5])))) % (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
            var_19 += ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)139)), (arr_4 [i_4] [i_5 - 1] [i_5 + 1]))));
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) (short)-32458)))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) var_8)))))));
        }
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))) & ((~(var_2))))))))));
        var_23 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) -1838854792)), (875162276U)))));
        arr_15 [i_4] = ((/* implicit */long long int) arr_3 [i_4] [i_4] [i_4]);
    }
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((short) (+(((/* implicit */int) (short)32756))))))));
        arr_20 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) ((unsigned char) ((short) var_10)))) : (((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_7] [i_7] [i_7] [i_7])) <= (min((arr_1 [i_7]), (((/* implicit */long long int) arr_0 [i_7] [i_7])))))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_8])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8]))))))));
        var_26 = 1215622707;
    }
    var_27 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_5))))) / ((~(var_11)))))));
}
