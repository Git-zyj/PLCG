/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117817
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */int) ((unsigned short) (~(((((/* implicit */int) (signed char)76)) | (((/* implicit */int) (signed char)-77)))))));
            var_18 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_5 [(unsigned short)0] [i_1]))) != (min((var_7), (((/* implicit */int) arr_5 [i_0] [i_1]))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1311783470U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (max(((short)31), (((/* implicit */short) var_9)))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (2983183836U) : (4149449903U))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) (-(3128085697U)));
                        arr_11 [i_1] = ((/* implicit */unsigned int) (-(-1738536391)));
                        var_21 *= ((/* implicit */unsigned short) ((int) (~(arr_7 [i_2] [i_2] [i_2] [i_2]))));
                        var_22 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((short) arr_5 [i_0] [i_0]))))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */int) var_8);
        }
        var_23 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (int i_5 = 1; i_5 < 12; i_5 += 3) 
            {
                {
                    var_24 = var_17;
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) * (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (unsigned short)64259)) ? (1738536391) : (var_4))))))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1268))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    var_27 = ((/* implicit */unsigned short) (-(var_10)));
    var_28 = ((/* implicit */int) (_Bool)1);
}
