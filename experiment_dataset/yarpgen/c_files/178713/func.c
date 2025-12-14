/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178713
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
    var_15 = ((/* implicit */unsigned int) (~(((var_5) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22209))))) ? (((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)195))))) : (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((short) ((unsigned short) (unsigned char)26)));
                var_18 = ((/* implicit */short) max(((!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)16928)))))), (((_Bool) arr_4 [i_0] [i_0 - 3]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2])) : ((~(((/* implicit */int) (unsigned short)16928))))))));
                            var_20 = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) (short)-22209)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48608))) : (var_7))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)48599)))))))));
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */_Bool) min((((/* implicit */int) min((arr_6 [i_4 + 2] [i_4 + 1] [i_4 + 1]), (((/* implicit */signed char) var_9))))), (((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)48624))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)48607)) : (((/* implicit */int) (short)22208)))), (((/* implicit */int) ((signed char) (unsigned char)106)))))) ? (((/* implicit */int) var_14)) : (max((((((/* implicit */_Bool) 1185741201)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [(unsigned char)3] [i_6] [i_6] [(unsigned short)9])))), (((/* implicit */int) arr_15 [i_5] [i_6] [i_7] [i_8]))))));
                                var_24 = ((/* implicit */signed char) max((var_11), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_18 [i_4 + 1] [i_5] [i_6] [i_4 + 1]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
