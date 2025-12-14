/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149433
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((unsigned short) 4095LL));
                    var_15 |= ((/* implicit */int) ((((420098542U) < (arr_4 [i_1 + 2] [i_1 + 4]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))))) : (((arr_4 [i_1 + 3] [i_1 + 1]) << (((arr_4 [i_1 + 4] [i_1 - 1]) - (2757584914U)))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_6 [i_0] [(unsigned short)16] [i_2])) / (((/* implicit */int) arr_2 [i_1]))))))) ? (((((((/* implicit */_Bool) arr_3 [(short)4] [(short)4])) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [(short)8] [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) || (((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2])))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */int) (short)-19);
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18421687274181580696ULL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_1 + 2] [i_1] [i_1 + 4])))))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) (unsigned short)65527);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */int) (short)-2)) | (((/* implicit */int) (signed char)-110)))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 23; i_5 += 3) 
        {
            var_21 = ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) (signed char)-120)));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                var_22 = (signed char)-47;
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (short)18)) + (((((/* implicit */_Bool) arr_4 [i_5] [i_5 - 1])) ? (var_12) : (((/* implicit */int) ((short) var_8)))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (arr_6 [i_5 - 1] [i_8] [i_8])));
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) - (240)));
                            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-60))));
                        }
                    } 
                } 
            }
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (9671858411586251170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_18 [i_0] [i_0] [i_5 + 1] [0] [i_5 - 1] [i_5 - 1] [i_9]))))));
                var_28 += ((/* implicit */short) ((arr_1 [i_5 + 1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_7 [i_9] [i_5 + 1] [i_5] [i_5 + 1]) : (((/* implicit */int) (short)17116)))))));
                var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_16 [i_5] [i_5 + 1] [i_5 - 1])))) && (((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5 - 1]))));
                var_30 = ((/* implicit */short) ((((min((18ULL), (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4064)))));
            }
        }
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (signed char)0)) | (var_3))) >= (((/* implicit */int) var_2))))) >= (var_3)));
}
