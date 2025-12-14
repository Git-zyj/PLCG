/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161247
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)-32745)) && (((/* implicit */_Bool) var_9))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_21 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))))) ? (((long long int) arr_1 [i_0] [i_0])) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
        var_22 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_23 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))))))));
        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [15] [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 4; i_3 < 17; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_26 += ((/* implicit */short) 1632506522U);
                        arr_18 [i_2] [i_2] [i_5] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_15 [i_2] [i_4])))), (arr_14 [(unsigned short)4] [i_5] [(unsigned short)4] [i_5] [(unsigned short)4])))) ? (max((((((/* implicit */_Bool) 2837663337U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [5ULL]))) : (arr_5 [i_3] [8LL]))), ((~(-1919753895759353965LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 2837663337U)))));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [5U]))));
                    }
                } 
            } 
        } 
        var_28 += ((/* implicit */unsigned long long int) 1457303960U);
        arr_19 [i_2] = ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (max((((/* implicit */long long int) 1457303942U)), (arr_17 [i_2] [i_2]))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(short)1])))))))));
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                {
                    var_29 = ((/* implicit */long long int) (-((-(4133198940U)))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_8])) ? ((((!(((/* implicit */_Bool) (unsigned short)58298)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (arr_21 [i_7] [i_8]))) : (2837663337U)));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_20 [i_7]) : (arr_20 [i_8])))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_6])) ? (5997103317514646091LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6])))))), (arr_27 [i_6])))));
                }
            } 
        } 
        arr_29 [13LL] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) 2837663337U)) <= (arr_5 [i_6] [i_6]))))));
        arr_30 [i_6] = ((/* implicit */unsigned int) 5199237966123584201LL);
    }
}
