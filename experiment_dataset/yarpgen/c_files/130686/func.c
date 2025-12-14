/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130686
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
    var_12 = ((/* implicit */short) ((((max((var_1), (((/* implicit */unsigned int) var_10)))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) - (((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_9)) ? (var_11) : (var_9))))))))));
            arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)255))))) ? (max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) + (((/* implicit */int) arr_4 [i_0]))))));
            var_14 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_4 [i_2])) - (190))))) : (((/* implicit */int) var_0))));
            arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8))) : (-5LL)))));
        }
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (min((var_3), (((/* implicit */unsigned int) ((int) min(((unsigned short)48678), (arr_14 [i_0] [i_3])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_17 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */short) var_4);
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_6))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_9)))))))));
                            var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) (~(var_1))))), (((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))))));
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7836)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_7] [i_5])), (var_4)))) : ((~(((/* implicit */int) ((short) var_3)))))));
                            var_21 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_7))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (((+(((/* implicit */int) ((unsigned short) 12997760101019828724ULL))))) % (((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_7)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-6))) != (var_11)))) : (((/* implicit */int) var_10))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_8))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_3] [i_8])) : (((/* implicit */int) (unsigned short)5676)))))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8653))) : (var_9)))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned short)8634)) > (((/* implicit */int) (short)-15)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)0), (arr_16 [i_0] [i_3] [i_4] [i_5] [i_8]))))))) * (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((((/* implicit */int) var_8)) - (13738))))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_29 [i_10] [i_3] [i_4] [i_9] [i_9] |= ((/* implicit */int) arr_19 [i_9 + 1] [i_9 - 1]);
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_10] [i_3] [i_3])))))))) ? (min((((unsigned int) (unsigned short)56904)), (((/* implicit */unsigned int) (signed char)107)))) : ((+(min((((/* implicit */unsigned int) var_10)), (var_2)))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                    arr_30 [i_0] [i_0] [i_4] [i_4] &= ((/* implicit */unsigned char) var_5);
                }
            } 
        } 
        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_1))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))) : (((unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
}
