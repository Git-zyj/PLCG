/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113338
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) ((_Bool) max((((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) : (arr_4 [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_2]))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((arr_4 [i_2]), (((/* implicit */long long int) (_Bool)1)))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1] [i_3 + 1]))))) : (min(((~(5650706514393609LL))), (((((/* implicit */_Bool) (signed char)83)) ? (-3742708910507435064LL) : (((/* implicit */long long int) arr_0 [i_3]))))))));
                        var_19 = ((/* implicit */unsigned short) (-(max((max((((/* implicit */long long int) (signed char)4)), (arr_4 [i_0]))), (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (unsigned char)154)))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45646)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            arr_13 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((long long int) (_Bool)0));
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1281537754299123683ULL)) ? (((/* implicit */unsigned long long int) 992LL)) : (((((/* implicit */_Bool) arr_1 [i_4])) ? (6796333546482715453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_5])))))));
                        }
                        var_21 = ((/* implicit */unsigned char) 5095844295172113482LL);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_1] [i_2 - 3] [i_2] = ((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) ^ (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_6])) ? (-992LL) : (arr_12 [i_2] [i_2])))))));
                        arr_18 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */long long int) max((((min((1052001883U), (((/* implicit */unsigned int) (signed char)109)))) % (((/* implicit */unsigned int) (+(arr_0 [i_0])))))), (((/* implicit */unsigned int) arr_6 [i_2]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)11)) ? (902498914) : (((/* implicit */int) (signed char)-41)))) % (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2] [i_2] [i_1] [i_1] [i_2 - 2] [i_7]))) || (((/* implicit */_Bool) arr_0 [i_1])))))));
                        var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((4843131799909810412ULL), (((/* implicit */unsigned long long int) -1075539036))))) ? (((((/* implicit */_Bool) 5650706514393609LL)) ? (((/* implicit */int) arr_19 [i_7] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 2])))) : ((~(((/* implicit */int) (signed char)-45))))))), ((((+(-1LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_4 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8211))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)45646)) == (arr_0 [i_0]))))) : (max((1281537754299123683ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (max((3049914909473815315ULL), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(629440347U))))))))));
                    arr_21 [i_2] [i_1] [i_2 - 2] [i_1] = ((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_0 - 2] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_25 = ((((/* implicit */_Bool) -3120096704373989931LL)) ? (max((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)7))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */long long int) var_10)) : (8263686271221888816LL))) << (((((/* implicit */_Bool) -1550590917404975966LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_6)))))));
}
