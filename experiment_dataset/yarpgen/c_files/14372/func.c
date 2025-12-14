/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14372
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4096))) | (2720316387423420139ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((((((/* implicit */int) (signed char)-85)) + (111))) - (12))))))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) -8622532514212923689LL))))))))));
        var_15 -= max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) min(((-(-573571532))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)127))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                        var_17 = 67108863LL;
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) (+(var_0)));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_19 [i_1] [(unsigned short)6] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_1)), (4525982640193884392LL)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_1] [i_5]))))))) : (((/* implicit */int) (short)-16668))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((8113311837889217082LL), (((/* implicit */long long int) var_9)))))));
                    var_20 = ((/* implicit */int) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned short)4551))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)255)), (var_12)))) ? (-4077328476293830816LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))))));
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        arr_22 [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2905430583373295229LL)) && (((/* implicit */_Bool) arr_7 [i_7] [i_7]))))))))));
        arr_23 [i_7] = ((/* implicit */signed char) (-(var_5)));
        var_21 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (arr_1 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17364))))), (((arr_1 [i_7]) + (var_2)))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8128))) : (var_12))))) ? (((/* implicit */unsigned long long int) 2147450880)) : (4378831538666104076ULL)));
}
