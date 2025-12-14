/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141082
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
    var_20 = ((/* implicit */signed char) var_9);
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((signed char)0), ((signed char)86)))), (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 3911666362883651323LL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-73)), (arr_3 [i_0]))))) : (((-9084513060845373160LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7279))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) -530254916);
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((-2093824089), (((/* implicit */int) (signed char)-8))))), (((((unsigned int) arr_1 [i_2])) >> (((((-1596276430) ^ (var_0))) + (216531315))))))))));
                    arr_9 [(unsigned short)6] [i_0] [i_0] [i_0] = ((/* implicit */int) max((min((((/* implicit */long long int) 1059920839)), (3411381942003909955LL))), (max((((/* implicit */long long int) (unsigned short)64428)), (9084513060845373149LL)))));
                    arr_10 [i_2 - 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) min((((unsigned short) (_Bool)1)), (var_17)));
                    var_24 = ((/* implicit */unsigned short) ((unsigned char) max(((unsigned short)2721), (((/* implicit */unsigned short) (signed char)110)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) ((-2731104333459235965LL) >= (3411381942003909956LL)));
                    var_26 ^= ((/* implicit */unsigned short) max((((arr_2 [(unsigned short)4] [i_1] [i_0]) - (arr_2 [i_0] [i_1] [i_3]))), (min((arr_2 [i_3] [i_1] [i_0]), (530254910)))));
                }
                for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_27 = (+(arr_6 [i_0] [i_0] [i_1] [i_0]));
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */long long int) arr_8 [i_0] [i_1] [(short)4] [i_5])) & (4735870757260570608LL)));
                    }
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_4])) && (((/* implicit */_Bool) var_17)))))))) == (min(((+(arr_15 [11LL] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) min(((signed char)-94), ((signed char)-79))))))));
                    var_30 = ((/* implicit */unsigned char) max(((~(((15623888785962063854ULL) ^ (((/* implicit */unsigned long long int) 2147483647)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20747)) - (((/* implicit */int) (signed char)80))))) ? (((/* implicit */int) ((short) (unsigned short)58242))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                    arr_17 [i_0] [i_0] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)138))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_6] = ((/* implicit */int) min(((!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) (signed char)-98))))))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (signed char)-104)))) < (((((/* implicit */_Bool) (signed char)-96)) ? (-906772239) : (((/* implicit */int) (unsigned short)65535))))))));
                        var_31 ^= ((/* implicit */unsigned long long int) ((3822849846514713248LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))));
                        var_32 = ((/* implicit */short) ((unsigned long long int) arr_3 [i_6]));
                        var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)117)), ((unsigned short)7258)));
                    }
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_34 -= ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0U) : (2560706621U)))) < (min((((/* implicit */long long int) (signed char)96)), (3411381942003909965LL)))))), ((unsigned char)249)));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_8] [i_7] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_12);
                                var_35 = ((/* implicit */long long int) (signed char)-29);
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */signed char) max((-782133387), (((/* implicit */int) (unsigned short)65535))));
                }
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (min((((/* implicit */int) (unsigned short)65535)), ((-(((/* implicit */int) (unsigned char)11))))))));
            }
        } 
    } 
}
