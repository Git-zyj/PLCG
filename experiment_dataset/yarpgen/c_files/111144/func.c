/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111144
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_9)))) != (((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))))))) | (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_12))))))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((((-(((/* implicit */int) var_12)))) + (((/* implicit */int) var_15)))) + (((((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)7936)))) + (((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)44585)))))))))));
    var_18 = ((/* implicit */int) var_10);
    var_19 |= ((/* implicit */unsigned char) -1416620377);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [(signed char)8];
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) arr_12 [i_0 + 1]);
                        var_21 = ((((((/* implicit */_Bool) arr_3 [i_3 - 2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [15] [(signed char)18])), (arr_3 [i_3])))) : (((((/* implicit */_Bool) var_8)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_15)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57600)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) var_6)))) : (((1683818124) << (((arr_1 [i_0 - 1]) - (454261657))))))));
                        arr_13 [(_Bool)1] [(_Bool)1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned short)7914), (((/* implicit */unsigned short) var_11))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0 - 1] [(signed char)8])))))))) >> (((max((((/* implicit */int) arr_6 [i_0] [i_0])), (((var_10) ? (((/* implicit */int) arr_5 [i_0 + 1] [(signed char)4] [(signed char)4])) : (((/* implicit */int) var_0)))))) - (58597)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57600))))) ? (((/* implicit */int) arr_7 [i_1] [(signed char)9] [i_1] [i_3])) : (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_9 [(_Bool)1] [i_3])))) >= (((((/* implicit */int) arr_14 [i_1] [i_2] [6])) % (((/* implicit */int) var_10)))))))));
                            arr_18 [i_0 - 1] [i_1] [(unsigned short)21] [(unsigned short)16] [7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                            var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 2] [i_1 + 1] [i_0 + 1] [i_0] [i_0])) ? (arr_16 [i_4] [i_4 - 1] [i_1 - 1] [i_0 + 2] [(signed char)18] [i_0 + 1]) : (arr_16 [(signed char)17] [i_4 + 1] [i_1 + 2] [i_0 - 1] [i_0] [i_0]))), (((/* implicit */int) ((signed char) 91040667)))));
                        }
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */int) var_8)), (arr_12 [i_2])))))) ? (91040667) : (((/* implicit */int) (unsigned short)44585))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 4; i_5 < 19; i_5 += 1) 
    {
        arr_21 [(unsigned char)4] [i_5] = ((/* implicit */unsigned short) arr_0 [i_5 - 1] [i_5]);
        var_25 = ((/* implicit */int) max((var_25), ((-(((((/* implicit */int) min(((unsigned short)65529), (((/* implicit */unsigned short) var_6))))) - ((+(((/* implicit */int) arr_11 [i_5 + 2] [i_5] [i_5] [i_5]))))))))));
    }
}
