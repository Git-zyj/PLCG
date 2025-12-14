/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163186
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), ((-(min(((+(((/* implicit */int) arr_2 [i_0])))), (1032192)))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)27631)))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
        arr_6 [i_1] = ((((arr_3 [i_1] [i_1]) < (arr_3 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_1] [i_1]) > (7383927706691887691ULL))))) : (min((((/* implicit */unsigned long long int) 536870880U)), (arr_3 [i_1] [i_1]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned long long int) var_14)))));
    }
    var_20 = ((/* implicit */int) ((unsigned long long int) var_2));
    var_21 = ((/* implicit */int) var_3);
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))), (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (536870880U)))))), ((~(var_4)))));
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */_Bool) var_7);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (short)25689))));
        var_24 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2])) << (((((((/* implicit */_Bool) 536870880U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) - (4294967273U))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_8 [i_2]))));
            arr_13 [i_2] = ((/* implicit */unsigned int) var_15);
        }
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((var_2) || (((/* implicit */_Bool) max((max((49610782264379014ULL), (11062816367017663925ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18051)) != (((/* implicit */int) arr_7 [(signed char)2]))))))))));
        arr_17 [i_4] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55369))) : (12837660619887873390ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_0 [i_4])))))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((signed char) 7383927706691887690ULL)))));
        var_28 = ((/* implicit */int) arr_2 [i_4]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) 7383927706691887691ULL);
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_3 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)10166))))) : (((((/* implicit */_Bool) (-(var_3)))) ? ((-(arr_4 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    }
}
