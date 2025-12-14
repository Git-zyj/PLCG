/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165586
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
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 = ((long long int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(short)4])) ? (466235951U) : (((3828731344U) / (4112064070U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) 182903226U)) <= (var_1)))))) : (min((((arr_2 [i_0] [0LL]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)8] [(signed char)8]))))), (((/* implicit */long long int) (~(182903226U)))))))))));
                        var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) 466235951U))) ? ((-(466235951U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11240))))), (((((/* implicit */_Bool) (short)3602)) ? (((4112064070U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) -1516848618))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
        {
            arr_13 [i_0] [i_4] = ((/* implicit */signed char) arr_2 [i_0] [(signed char)4]);
            var_16 = (+(var_6));
            var_17 = ((/* implicit */short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) >= (((/* implicit */int) arr_12 [i_0]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -7550094252484747903LL))))), ((signed char)0)));
            var_19 = ((/* implicit */unsigned short) min((min((8070450532247928832LL), (((/* implicit */long long int) 7)))), (((((-4818405728532662282LL) + (9223372036854775807LL))) >> (7)))));
            var_20 = ((/* implicit */unsigned long long int) (+(0LL)));
        }
        for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            var_21 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)-26)) == (var_8)))), ((+(((/* implicit */int) arr_3 [i_0] [i_6 - 1]))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(var_9))))));
        }
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(short)0])) << (((arr_8 [i_0] [i_0]) - (2215136346U)))))) ? ((-(7550094252484747885LL))) : (((((var_1) + (9223372036854775807LL))) << (((3828731345U) - (3828731345U))))))))));
    }
    for (short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((10000281693522660002ULL) ^ (((/* implicit */unsigned long long int) 4112064070U))))))))) : (((((/* implicit */_Bool) (unsigned short)1020)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 8)))) : (var_11)))));
        arr_21 [4LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_3)))))) ? (min((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_10)))))) : (((/* implicit */int) (_Bool)1))));
        var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), ((+(var_11)))));
        var_26 = ((/* implicit */int) 8796093021184ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_27 = ((var_11) >> (((549739036672LL) - (549739036655LL))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10000281693522660002ULL)) ? (((/* implicit */unsigned long long int) 182903226U)) : (((((/* implicit */_Bool) 4112064069U)) ? (8446462380186891593ULL) : (((/* implicit */unsigned long long int) -8))))));
        var_29 = (!(((/* implicit */_Bool) 182903247U)));
    }
    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)18084))));
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 182903226U)) ? (var_5) : (((/* implicit */int) (!(var_2))))))) ^ ((~(((((/* implicit */_Bool) var_9)) ? (var_7) : (var_7))))))))));
}
