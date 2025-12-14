/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170306
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
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_1 + 3] [i_0 + 1])))) ? (((arr_2 [i_1 + 1] [i_0 - 2]) ^ (arr_2 [i_1 + 3] [i_0 - 2]))) : (((/* implicit */unsigned long long int) (+(2025029945925363376LL))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_1 [(unsigned short)15] [i_1])))) * (((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_6)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_7);
    var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) (~((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) > (((2025029945925363383LL) << (((((((/* implicit */int) (short)-32558)) + (32607))) - (47)))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 6; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)93)) ? (2025029945925363376LL) : (((/* implicit */long long int) 9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)6]))) : (((long long int) var_13)))) & (((/* implicit */long long int) min(((+(((/* implicit */int) arr_6 [i_2] [i_2] [i_3])))), (((/* implicit */int) var_13)))))));
                var_24 = ((/* implicit */int) arr_2 [i_2] [i_2 + 4]);
                var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -2025029945925363382LL)) ? (2025029945925363376LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7012)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    for (long long int i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        {
                            var_26 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */int) arr_0 [i_4])) * (((/* implicit */int) (signed char)-69)))) : ((-(((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1] [(signed char)2]))))))), (((((/* implicit */_Bool) (-(var_6)))) ? (((var_2) ? (arr_3 [i_5] [(unsigned short)9]) : (((/* implicit */unsigned long long int) -2025029945925363386LL)))) : (((arr_2 [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29001))))))));
                            var_27 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) arr_8 [i_3] [i_4 - 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (arr_12 [(_Bool)1] [i_5] [i_4 + 2] [i_3] [i_2 + 4] [i_2 + 4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3410982320U)) ? (((/* implicit */unsigned int) 931902605)) : (883984976U)))))));
                            var_28 = ((/* implicit */long long int) (-((((~(((/* implicit */int) (short)-28860)))) & (((/* implicit */int) (signed char)-69))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-28858))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13)))) : (min((arr_3 [i_3] [i_5 + 3]), (((/* implicit */unsigned long long int) 3223322276466919015LL))))))));
                            var_30 = ((/* implicit */unsigned char) arr_6 [(unsigned short)2] [(unsigned short)2] [i_4 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
