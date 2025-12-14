/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153643
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) >= ((~(((var_4) ? (var_3) : (var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)75))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)74)) >= (((/* implicit */int) (signed char)-64))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [(unsigned char)2])) : (((/* implicit */int) arr_3 [i_2]))))) ? (arr_5 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0]))) : (arr_4 [(_Bool)1])))))) : (((/* implicit */unsigned long long int) max((2147483620), (((/* implicit */int) (signed char)47)))))));
                            var_12 = ((/* implicit */unsigned char) (~((+(arr_4 [i_3 + 1])))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7)))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)200))))))), ((+(min((((/* implicit */unsigned int) arr_1 [(_Bool)1])), (arr_0 [i_0])))))));
                                arr_24 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_4] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) 9223372036854775790LL)))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) (unsigned char)55))), ((+(3513434549U)))))) ? ((~(((arr_11 [i_0] [i_0] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (-9223372036854775765LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_4)) : (-1061639478))) : ((-(((/* implicit */int) (unsigned char)15))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = var_6;
    var_16 = var_1;
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
}
