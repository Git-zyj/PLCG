/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118166
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
    var_17 = ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -6114988093340355000LL))))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)231))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) ((_Bool) arr_1 [5LL] [i_0])))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_19 -= ((/* implicit */unsigned int) arr_0 [10LL] [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) ? (2912128498U) : (((/* implicit */unsigned int) var_8)))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))) - (((/* implicit */unsigned int) (+(arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 1] [i_3] [i_0]))))));
                            var_21 = ((/* implicit */int) (-(min((((((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2] [i_2] [4U] [i_0])) | (1382838800U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_8 [i_5] [i_5] [i_5] [i_5]))), ((~(((/* implicit */int) (unsigned char)231)))))))));
            var_23 |= ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)56389))));
            var_25 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56380))) - (((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0 + 1]))));
                        var_27 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (var_1))));
                        var_28 = ((/* implicit */unsigned char) ((4278023739U) ^ (arr_19 [i_0 + 1] [(unsigned char)16] [i_0 + 1] [i_0])));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) ((arr_25 [i_0 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 1]))) : (((2912128508U) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_6])) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])))) ? (((/* implicit */unsigned int) ((arr_20 [i_0 + 1] [i_6]) ? (((/* implicit */int) (_Bool)0)) : (var_12)))) : (arr_18 [i_0 + 1]));
        }
    }
    var_31 = ((/* implicit */long long int) (+((~(((/* implicit */int) ((var_7) >= (((/* implicit */long long int) 1382838797U)))))))));
    var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
}
