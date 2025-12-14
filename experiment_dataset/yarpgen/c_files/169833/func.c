/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169833
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) (unsigned short)49892);
            var_15 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65532))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) min((var_16), ((unsigned short)3023)));
                            var_17 = ((/* implicit */unsigned long long int) (unsigned short)3023);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (var_4)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((var_19), (arr_3 [i_0])));
                var_20 = ((/* implicit */unsigned long long int) ((max((min((arr_0 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45273)))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((unsigned long long int) (unsigned short)51345)) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                    arr_15 [i_1] [i_2] [i_1 + 1] [i_1] = (+(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3023))) / (arr_12 [i_0] [i_0] [i_2] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62513)) / (((/* implicit */int) (unsigned short)54378))))))));
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7837))) | (arr_8 [i_0] [i_1] [i_2] [i_2] [i_0]))), (min((18446744073709551612ULL), (arr_0 [i_0] [i_0]))))) - (6706044769626526953ULL)));
                    var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)57124));
                    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)62512))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (11995334891211182406ULL)));
                }
            }
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
            {
                var_26 = (unsigned short)64807;
                var_27 = ((/* implicit */unsigned long long int) (unsigned short)59895);
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((((var_13) | (arr_5 [i_1]))) >> (((arr_20 [i_9 - 1] [i_7] [i_1 + 1]) - (5270073999604469519ULL))))) ^ (min((12205671329473456594ULL), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_8] [i_7])))))))));
                            arr_26 [i_9] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(9ULL)));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
            {
                var_29 = (((((-(arr_5 [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_10]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) << (((((((/* implicit */int) arr_10 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1])) << (((((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_1])) - (23752))))) - (4436220))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_33 [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))) | (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_11])) ? (((/* implicit */int) ((arr_28 [i_0] [i_1 - 1]) != (11554155287184452074ULL)))) : (((/* implicit */int) min(((unsigned short)62512), (arr_11 [i_0] [i_1 - 1] [i_0] [i_10]))))))));
                    var_30 = ((/* implicit */unsigned short) ((6706044769626526952ULL) | (16347272983081637716ULL)));
                    var_31 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_10] [i_1] [i_0] [i_0])) / (((/* implicit */int) arr_19 [i_0] [i_0] [i_10]))))) * (((arr_0 [i_0] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1 + 1]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15865858706055456678ULL)))))));
                }
                for (unsigned short i_12 = 4; i_12 < 9; i_12 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_10] [i_12]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_10] [i_1] [i_1 - 1] [i_12])))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [i_1]))) / (2685263230358593466ULL)))))));
                    arr_36 [i_12] [i_1] [i_1] [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [i_1]);
                    var_33 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) min((arr_16 [i_12] [i_12] [i_10] [i_1 + 1] [i_0]), (var_4))))))));
                    arr_37 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((6706044769626526952ULL), (2099471090627913892ULL)))) ? (arr_28 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62503))))))) != (arr_31 [i_1] [i_1])));
                }
            }
            var_34 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        }
        var_35 = ((/* implicit */unsigned long long int) (unsigned short)6);
    }
    for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 2) 
    {
        var_36 = ((/* implicit */unsigned short) (+(arr_38 [i_13 + 1] [i_13 + 1])));
        var_37 = 7726383710034842287ULL;
    }
    var_38 = ((/* implicit */unsigned short) 8297796534771213891ULL);
}
