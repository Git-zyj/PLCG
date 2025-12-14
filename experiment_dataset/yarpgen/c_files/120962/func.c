/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120962
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)77))))))) ? (((((((/* implicit */int) var_14)) != (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-95)) >= (((/* implicit */int) (unsigned char)102))))) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-119))))))) : (((/* implicit */int) max(((unsigned char)100), (((/* implicit */unsigned char) (signed char)-109)))))));
        arr_3 [(unsigned char)18] = ((/* implicit */unsigned short) (signed char)43);
        arr_4 [i_0] = ((/* implicit */_Bool) (-(((((long long int) (unsigned short)15647)) * (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16383), (((/* implicit */unsigned short) (unsigned char)0))))))))));
        arr_5 [i_0 + 3] = ((long long int) arr_1 [(_Bool)0]);
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) arr_6 [i_1 + 4])) : (((/* implicit */int) arr_6 [i_1 + 1]))))) ? (((arr_6 [i_1 + 2]) ? (((/* implicit */int) arr_6 [i_1 + 3])) : (((/* implicit */int) (unsigned char)212)))) : ((~(((/* implicit */int) arr_6 [i_1 + 1]))))));
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) (unsigned short)896));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [(signed char)8])) | ((((~(((/* implicit */int) var_4)))) >> (((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (signed char)31)))) - (31179)))))));
        var_17 = ((/* implicit */signed char) (~(min(((-(((/* implicit */int) (unsigned short)28287)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)188)), ((unsigned short)19269))))))));
    }
    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_21 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)-17)), ((unsigned short)37942)));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37249)) ? (((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_5 + 1] [i_5 + 1] [i_5]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1])), ((unsigned short)50659))))));
                }
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 13; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned char)226)))) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)55)))))));
                    arr_24 [i_6] = ((/* implicit */unsigned char) (~(arr_17 [i_6 + 2])));
                    arr_25 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */signed char) (unsigned short)65535);
                }
                var_21 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))), (((((/* implicit */int) max(((unsigned char)219), (((/* implicit */unsigned char) arr_16 [i_3] [i_3]))))) >> (((((((/* implicit */_Bool) var_2)) ? (-4715645292718801735LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)7]))))) + (4715645292718801759LL)))))));
                var_22 = ((/* implicit */_Bool) -4715645292718801735LL);
            }
        } 
    } 
}
