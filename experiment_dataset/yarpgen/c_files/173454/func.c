/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173454
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_11);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_1] [(unsigned char)1]));
                    arr_10 [9U] [i_0] [i_2] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) <= (var_13)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))));
                    var_21 = ((/* implicit */_Bool) 3586101173U);
                    arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)195)) ? (708866107U) : (536870911U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3586101189U)) && (((/* implicit */_Bool) 708866123U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) max((((arr_0 [i_0]) * (arr_3 [i_2] [i_1] [i_0]))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)37)))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_6 [i_0] [i_0] [i_0])));
        var_23 = ((/* implicit */unsigned int) (+(((2611481813764509381ULL) / (((/* implicit */unsigned long long int) 4294967287U))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_24 = ((((/* implicit */_Bool) min(((~(676684486U))), (arr_0 [2U])))) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)17215)))), (((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_1))))))) : (arr_13 [i_3]));
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3])) * (((((/* implicit */_Bool) arr_6 [i_3] [i_3] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_4 [9LL] [i_3])) : (var_9))))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned short)17215))));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) max((var_3), (var_7))))))) * (594776333U)));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_3]);
    }
    var_28 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1190401128U)) : (var_11))))))));
    var_29 = ((/* implicit */unsigned long long int) var_13);
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (var_10)));
}
