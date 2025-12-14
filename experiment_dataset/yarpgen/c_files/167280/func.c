/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167280
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
    var_19 = ((/* implicit */int) min((134215680LL), (((/* implicit */long long int) -1002290003))));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1364062770705071282ULL))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) (unsigned char)235))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [8U] [i_1] [i_2] = ((/* implicit */unsigned int) (-(var_3)));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : ((~(-1)))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned long long int) ((long long int) 1877047613U));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 804344949))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (short)24003))));
                    var_25 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)51186)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)56))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)40408)) : (((/* implicit */int) arr_2 [i_0] [i_3]))));
                    var_27 = ((/* implicit */int) arr_0 [i_0]);
                }
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        arr_16 [i_5] [(short)9] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1])) && (((var_12) <= (((/* implicit */int) (short)16889)))))) ? (((((/* implicit */_Bool) 14174123149122947424ULL)) ? ((-(((/* implicit */int) (short)18612)))) : (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5 + 1])) ? (arr_15 [i_5 + 1] [i_5 - 1]) : (arr_15 [i_5 + 1] [i_5 - 1])))));
        var_28 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1])) ? (arr_14 [i_5 - 1] [17LL]) : (((/* implicit */unsigned long long int) arr_15 [i_5 - 1] [i_5]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_24 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) 9223372036854775807LL);
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1080863910568919040ULL) : (min((((/* implicit */unsigned long long int) var_1)), (min((arr_14 [i_6] [(signed char)10]), (((/* implicit */unsigned long long int) var_0))))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) ((unsigned int) 33554176));
}
