/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153422
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
    var_19 = ((/* implicit */unsigned short) var_16);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned short) 4294967295U);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) 9721659718970692263ULL);
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) (~(min((arr_5 [i_1 - 3]), (arr_5 [i_1 - 1])))));
        var_22 = ((/* implicit */unsigned char) arr_4 [i_1]);
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_15 [(unsigned char)5] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(((int) arr_6 [(_Bool)1] [i_2]))));
                        var_23 -= (~(((unsigned long long int) (~(arr_4 [i_1 - 3])))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) ((short) min((((short) var_6)), (((/* implicit */short) (signed char)-121)))));
            var_25 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) min((((/* implicit */unsigned short) (short)27)), ((unsigned short)55690))))))), (arr_4 [14])));
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_26 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5]))) <= (arr_5 [i_5])))))))));
            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_8 [i_5]), (((/* implicit */unsigned int) arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2])))))));
            arr_18 [i_5] [(unsigned char)13] [i_1] = ((/* implicit */int) (+(arr_8 [i_1 - 2])));
        }
        arr_19 [i_1 - 1] = ((/* implicit */unsigned short) ((int) ((int) (short)32767)));
        var_28 ^= ((/* implicit */unsigned char) var_4);
    }
}
