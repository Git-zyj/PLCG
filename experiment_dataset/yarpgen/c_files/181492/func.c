/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181492
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4161536)) ? (((/* implicit */int) (_Bool)0)) : (2147483647)))) : (var_2)));
    var_20 = ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) (_Bool)1)), (5658598006304056570LL)))))) ? ((~(((/* implicit */int) min((var_4), (((/* implicit */signed char) var_13))))))) : (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_9)))), (min(((+(((/* implicit */int) arr_3 [i_0 - 1] [i_0])))), ((~(((/* implicit */int) (unsigned char)255))))))));
        arr_4 [i_0 + 1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0])))))) ? (max((((/* implicit */unsigned long long int) var_0)), (((arr_2 [i_0]) >> (((var_14) - (3782712997155525378ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)51973)) >= (((/* implicit */int) (unsigned short)51954))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [(signed char)1] [(signed char)1])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))))))) / (((((/* implicit */_Bool) var_1)) ? (var_14) : (arr_2 [i_0 - 2])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 + 1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)236)), ((unsigned short)65391)));
        var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_1 - 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((((/* implicit */_Bool) (unsigned short)126)) ? (arr_2 [8U]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((long long int) var_18)))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((((+(arr_6 [i_1]))) | (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_6))) + (2147483647))) << (((((/* implicit */_Bool) arr_0 [9])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1])))))))));
            arr_12 [(short)5] [i_1] [i_1] = ((((min((((/* implicit */int) (unsigned short)6144)), ((~(((/* implicit */int) var_4)))))) + (2147483647))) >> ((((~(var_2))) - (1314639831U))));
            arr_13 [i_1] [1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_1 + 1])) + (18289))) - (16))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)27043))))) ? (min((((/* implicit */unsigned long long int) arr_15 [i_1 - 1])), (arr_7 [i_1] [i_3]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) max((arr_11 [i_1]), (((/* implicit */unsigned long long int) var_13)))))))))));
            var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_1] [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [8]))))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) -5658598006304056596LL)) : (arr_2 [i_3]))) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_3]))))));
            arr_16 [i_1] [i_3] = ((/* implicit */signed char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) | (arr_7 [i_1] [i_1]))) / (((/* implicit */unsigned long long int) 919981415536570135LL)))), (((/* implicit */unsigned long long int) arr_10 [i_1 - 2] [i_1 - 2] [i_3]))));
        }
        for (signed char i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            arr_21 [i_1] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_19 [i_4 - 3]))))));
            var_27 = ((/* implicit */signed char) (~(((((((/* implicit */long long int) arr_5 [i_1] [i_4])) > (arr_6 [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (-919981415536570136LL)))))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 7; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) 5658598006304056595LL)) ? (919981415536570135LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6144)))))));
                        var_29 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_15 [i_1 - 1])))) || (((/* implicit */_Bool) min((arr_15 [i_1 - 1]), (arr_15 [i_1 - 2]))))));
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_1 - 2])), (max((((/* implicit */long long int) arr_23 [i_1 - 1] [i_4 + 1] [i_5])), (36028797018963967LL))))))));
                    }
                } 
            } 
            arr_28 [i_1] = ((/* implicit */long long int) var_3);
            arr_29 [i_1] = ((/* implicit */unsigned long long int) ((max(((~(var_2))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)239)), ((unsigned short)6144)))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_14 [i_1 - 2] [i_1]), (arr_14 [i_1 - 2] [i_1])))))));
        }
        var_31 = ((/* implicit */short) var_17);
    }
    for (int i_7 = 3; i_7 < 19; i_7 += 4) 
    {
        arr_33 [i_7 + 2] [i_7 + 2] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        var_32 &= ((/* implicit */signed char) min((min((max((((/* implicit */long long int) var_18)), (var_1))), (((/* implicit */long long int) arr_31 [i_7 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7])))))) ? ((+(((/* implicit */int) arr_32 [i_7 + 4])))) : ((-(((/* implicit */int) arr_31 [i_7])))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) 
    {
        var_33 = (+(max((var_10), (var_12))));
        var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-8329639652261718511LL)))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned short) arr_32 [i_8])))));
    }
}
