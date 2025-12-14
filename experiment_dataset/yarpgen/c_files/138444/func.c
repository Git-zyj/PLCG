/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138444
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
    var_18 = var_15;
    var_19 &= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-53)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */unsigned int) var_9)) : (1922344137U)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)39))))) ? (((/* implicit */int) ((1879122049U) > (1879122051U)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) != (((/* implicit */int) (_Bool)1))))))) & (((/* implicit */int) (signed char)-65))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (4294967292U)));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-92)), (3221225472U)))) ? (12429974285471995800ULL) : (((/* implicit */unsigned long long int) max((833691782), (((/* implicit */int) (signed char)-54)))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_22 ^= ((/* implicit */short) (~(min((((((/* implicit */_Bool) 3126961454U)) ? (arr_1 [i_0]) : (-24437636))), (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))))))));
            arr_9 [i_0 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 4065735314U)) ? (arr_6 [i_2] [i_2]) : (arr_1 [i_0 - 1])));
            /* LoopSeq 2 */
            for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))));
                arr_12 [i_2] [i_2] = ((/* implicit */short) 764941486);
                arr_13 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((((((/* implicit */int) (short)-18)) + (2147483647))) >> (((arr_3 [i_0 + 1] [i_0 + 1]) - (2946551841U))))) != ((-(arr_11 [i_0 - 1] [i_2] [i_3 - 1])))));
            }
            for (int i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_0 [5ULL]))));
                var_25 = ((/* implicit */unsigned long long int) -81732711);
            }
        }
        for (int i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-46))));
            arr_18 [i_0 - 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_5]))))) ? (((/* implicit */unsigned int) arr_6 [i_5] [6])) : (((((/* implicit */_Bool) arr_10 [14ULL] [i_5] [3])) ? (4115064668U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)31443))))))));
        }
        /* LoopNest 3 */
        for (signed char i_6 = 4; i_6 < 17; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        arr_29 [i_7] [i_7] = ((/* implicit */short) arr_1 [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) max((((arr_23 [i_7]) ? (((/* implicit */int) arr_32 [i_7] [i_0 - 2] [i_0 - 1] [i_7] [i_9 - 3])) : (((/* implicit */int) arr_23 [i_7])))), (((((/* implicit */int) (signed char)76)) - (((/* implicit */int) arr_23 [i_7]))))));
                            arr_33 [i_7] [i_7] [(unsigned short)16] [i_8] [1ULL] [i_8] [(signed char)2] = ((((((/* implicit */_Bool) 24437636)) ? (arr_6 [i_7] [i_7]) : (arr_6 [i_7] [i_7]))) & (max((arr_6 [i_7] [i_7]), (((/* implicit */int) arr_25 [(short)2] [i_9 - 1] [(short)2])))));
                            arr_34 [i_0] [i_0] [i_0] [i_7] [3U] [i_7] [i_9 - 3] = ((/* implicit */unsigned long long int) -24437651);
                            arr_35 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) (-((-(min((((/* implicit */unsigned long long int) arr_22 [i_9] [i_7] [i_6] [i_0 - 2])), (arr_2 [18U])))))));
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2]))))) ? (((/* implicit */int) ((unsigned short) var_9))) : ((~(((/* implicit */int) var_17)))))) < (((((((/* implicit */_Bool) (signed char)61)) && (arr_21 [i_0 - 2] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) != (2147483642)))) : (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_10)))))))));
        var_29 = ((/* implicit */unsigned int) (~(max((((((/* implicit */int) arr_4 [(signed char)7] [(signed char)7] [(signed char)7])) | (((/* implicit */int) var_12)))), (max((2147483633), (((/* implicit */int) arr_32 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]))))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_0] [i_0] [15])))) / (((arr_0 [i_0 - 1]) - (-24437636)))))) >= (1879122032U)));
    }
    var_31 &= (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) var_6))))));
}
