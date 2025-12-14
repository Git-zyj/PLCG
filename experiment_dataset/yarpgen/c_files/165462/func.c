/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165462
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
    var_14 = 18130602808866354852ULL;
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_11)) == (arr_0 [i_0 + 1] [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) (+(arr_3 [i_0])));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((_Bool) arr_1 [(unsigned short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((316141264843196764ULL) / (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 + 1])) | (((/* implicit */int) arr_4 [i_1]))));
        }
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(18130602808866354843ULL)));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (6093157269093609667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))));
            var_18 = ((/* implicit */unsigned long long int) var_4);
        }
        var_19 &= ((/* implicit */signed char) ((arr_0 [i_0 + 1] [3U]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_12 [i_3 - 1])) != (6093157269093609667ULL)));
        var_21 = ((/* implicit */_Bool) ((signed char) arr_12 [i_3]));
        var_22 = ((/* implicit */unsigned char) 316141264843196780ULL);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) ((long long int) ((unsigned char) arr_15 [i_4] [i_4])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_14 [(signed char)6] [i_4])) & (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) arr_13 [(signed char)14] [i_4])), (-4418615636924478561LL)))))) ? (((((/* implicit */int) arr_13 [i_4] [i_4])) - (arr_15 [i_4] [i_4]))) : ((+(((/* implicit */int) ((6403707219079353880LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))))))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) - (((unsigned int) 441349857))))) ? (((unsigned long long int) ((((/* implicit */int) arr_13 [i_4] [(unsigned short)6])) >> (((18446744073709551590ULL) - (18446744073709551578ULL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 9192689375462423394ULL)))))) / (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (141280772U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)199), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) (signed char)-38))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_24 [i_6] [i_5] [i_5])) < (((/* implicit */int) arr_24 [i_6] [i_7 + 1] [i_6]))))))));
                                arr_30 [i_4] [i_6] [i_5] [i_4] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((8480297475591254852ULL), (((/* implicit */unsigned long long int) -9223372036854775806LL))))))))) & (min((max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_5])), (arr_17 [i_4]))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)164)))))));
                                arr_31 [i_4] [i_7 + 1] [i_7 + 1] [i_4] [i_8] = ((/* implicit */signed char) (+(var_11)));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_29 [i_7 + 1]), (((/* implicit */unsigned long long int) ((-6403707219079353880LL) & (((/* implicit */long long int) 141280797U)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (-4418615636924478564LL)))) : ((+(arr_17 [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = (~(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)57)) ? (var_13) : (((/* implicit */int) var_6))))))));
}
