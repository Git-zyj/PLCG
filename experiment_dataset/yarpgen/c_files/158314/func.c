/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158314
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
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (((unsigned long long int) var_1))));
    var_18 += max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) var_14))), (var_2)))), (var_3));
    var_19 = ((/* implicit */unsigned char) 18446744073709551597ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] = (!(((/* implicit */_Bool) (unsigned short)1023)));
                    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2269496949U)) ? (((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32745))) : (9860796464561533727ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))));
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) * ((+(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) / (((/* implicit */int) (short)-25673))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned int) -1890467856))))) || (((/* implicit */_Bool) (~((~(((/* implicit */int) (short)17643)))))))));
                        arr_15 [i_0] [i_1] [2ULL] [7ULL] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 - 1] [(unsigned char)10] [(unsigned char)10] [i_3 + 3])) != (arr_6 [i_1 + 1] [i_1 - 3] [17U]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4019928923U) : (2025470348U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (short)17654))))) : (arr_2 [i_1] [i_1] [i_0])))) : (4044186924395037241ULL)));
                        var_23 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) var_4))), ((+(arr_4 [i_3 + 3] [i_3 + 3])))));
                    }
                }
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    arr_18 [(short)7] [i_0] = ((/* implicit */unsigned long long int) var_2);
                    arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11083110101834574695ULL)) ? (14402557149314514347ULL) : (((/* implicit */unsigned long long int) 98304U))));
                }
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) 2025470347U));
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((short)25693), (min((((/* implicit */short) (signed char)-20)), ((short)-1)))));
            }
        } 
    } 
}
