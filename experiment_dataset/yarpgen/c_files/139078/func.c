/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139078
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((unsigned short) (signed char)14);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_13 += ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) ((unsigned short) (signed char)-10))));
            var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((int) arr_1 [i_1] [i_1 - 1]))), (var_6)));
            var_15 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) arr_1 [i_1 + 4] [i_1 + 4])))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_4 + 1] [i_3] [i_4 - 1]))));
                            var_17 = ((/* implicit */signed char) arr_2 [i_0]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) (signed char)10);
            var_19 = ((/* implicit */unsigned short) max((var_19), (var_8)));
        }
        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((_Bool) var_7)))))))));
            var_21 = max((min((arr_11 [i_0] [i_6 - 2] [i_6] [11] [i_6 - 2] [i_6 - 1]), (arr_11 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2] [i_6]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_10))))), ((~(((/* implicit */int) var_4))))))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_22 [i_7] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_5 [i_6 + 1]), ((unsigned short)52835)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max(((unsigned short)30176), (((/* implicit */unsigned short) var_7))))) : (((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_7] [i_0]))))))));
                var_22 = ((/* implicit */unsigned short) var_12);
            }
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_7)), (arr_9 [i_0] [(unsigned short)2] [(_Bool)1] [i_0] [i_0])));
        }
    }
    var_23 ^= ((/* implicit */int) ((long long int) ((unsigned char) (+(((/* implicit */int) (signed char)109))))));
    var_24 = ((/* implicit */int) (unsigned short)30176);
}
