/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148151
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
    var_12 &= ((/* implicit */signed char) var_6);
    var_13 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) 774865884U)), (var_7))) * (((((/* implicit */unsigned long long int) ((774865892U) / (((/* implicit */unsigned int) var_8))))) * (((((/* implicit */unsigned long long int) 3520101427U)) / (10774749380975201535ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned short) max((var_10), ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_0])))) : (((((/* implicit */_Bool) 3520101423U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (2310130416717626790ULL)))))));
                    arr_8 [i_1] &= ((/* implicit */short) arr_4 [i_0 - 1]);
                    arr_9 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15333)) ? (((/* implicit */unsigned long long int) 774865868U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) - (16136613656991924826ULL)))));
                }
                for (signed char i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (~(3520101376U)))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((3520101394U) - (3520101383U)))))) : (max((-6635844397335416583LL), (((/* implicit */long long int) 3520101391U)))))));
                    arr_13 [i_3 - 2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((arr_10 [i_0 + 1] [i_3] [i_3 - 3] [i_1]) / (arr_10 [i_0 + 2] [i_1] [i_3 - 1] [i_1]))) == (min((arr_10 [i_0 - 1] [i_1] [i_3 - 3] [i_1]), (3520101411U)))));
                }
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(774865864U)))))) ? (max((((/* implicit */long long int) (!((_Bool)1)))), (max((var_4), (arr_6 [i_1] [i_0] [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] = ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2528554154394072479LL))), (((/* implicit */long long int) var_3))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1502568424)) ? (14728815054125794346ULL) : (3717929019583757277ULL)))) ? (5118630384636946208ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]))) : (arr_11 [i_1] [i_0])))))));
                            arr_21 [i_1] = ((/* implicit */unsigned short) max((arr_6 [i_0 + 2] [i_1] [i_0 - 1] [i_0 + 2]), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_5])), ((unsigned char)211)))) ? (((long long int) arr_19 [i_0] [11] [i_4] [i_5 + 1] [i_4] [i_0])) : (((/* implicit */long long int) max((3520101374U), (3520101383U))))))));
                            arr_22 [i_0] [i_1] [19ULL] [i_5] = arr_15 [i_4 - 1] [i_0 + 2] [(_Bool)0] [i_0 + 1];
                        }
                    } 
                } 
                arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1232670220)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0] [i_0] [(signed char)7] [(short)6]))), (((774865845U) << (((((/* implicit */int) var_6)) - (24635)))))))) : (min((14728815054125794337ULL), (((/* implicit */unsigned long long int) 4))))));
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) var_10)) ? (((max((((/* implicit */unsigned long long int) var_5)), (var_10))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_1)) : (3520101406U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
