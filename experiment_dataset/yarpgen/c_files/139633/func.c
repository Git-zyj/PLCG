/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139633
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967295U)) / (13505819032673717377ULL)))) ? ((-(((/* implicit */int) var_2)))) : (((((((/* implicit */int) var_5)) / (var_1))) / (((((/* implicit */_Bool) var_11)) ? (var_1) : (var_1)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) arr_1 [3LL] [i_1]))))));
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned char)163))))), (((arr_5 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : ((((+(var_10))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-122)))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    var_12 += ((/* implicit */unsigned int) arr_0 [i_0]);
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) arr_11 [i_0]))));
                }
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ ((+(min((3599595826U), (((/* implicit */unsigned int) (unsigned char)71))))))));
                    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) && (((/* implicit */_Bool) arr_1 [i_0] [i_3])))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1)))))) : ((((!(((/* implicit */_Bool) -3267929612299924516LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)163)) || (((/* implicit */_Bool) (signed char)-127))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -6829730112810875294LL)))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */long long int) (((!(((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))))) ? (((((((/* implicit */unsigned long long int) 1923855198U)) != (8795824586752ULL))) ? (((((/* implicit */_Bool) 8625782196082974755ULL)) ? (18446735277884964851ULL) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -863081808)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (signed char)98))))))) : (max((((arr_15 [(signed char)16] [4U] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [12U] [i_1] [i_0]))) : (8795824586748ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8160)))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)211))))) * (((/* implicit */int) max((arr_15 [i_0] [i_1] [i_3] [i_0] [i_0] [i_1]), (arr_15 [i_0] [8LL] [i_3] [i_3] [i_3] [i_3]))))));
                                arr_21 [i_0] [i_0] [i_0] [i_3] [12U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_8))))) ? (((long long int) 863081807)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */signed char) var_6);
                }
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                arr_31 [i_6] [i_7] [0U] [(_Bool)1] [i_8] [i_7] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_27 [i_0] [i_6] [i_6] [i_6] [i_8] [(signed char)10]) : (((/* implicit */long long int) (-(var_7)))))) | (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [14LL] [14LL])) : (arr_14 [i_0] [i_6] [2ULL] [i_0]))))))));
                                var_20 = ((/* implicit */unsigned int) ((-2560733469204040246LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_21 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8036447727187169779LL)) ? (8795824586765ULL) : (((/* implicit */unsigned long long int) 6306808047256772262LL))))))));
                                arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8036447727187169758LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2U)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))) - (18446735277884964851ULL))))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_6] [i_6]))));
                }
            }
        } 
    } 
    var_24 *= ((/* implicit */unsigned int) var_4);
}
