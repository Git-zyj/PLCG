/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176534
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((unsigned short) var_1)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((long long int) 11530036577739382608ULL))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0] [(_Bool)1]))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                arr_8 [i_0 + 1] [(_Bool)1] [(signed char)14] &= ((/* implicit */short) var_0);
                arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) min((var_7), (((/* implicit */long long int) var_4))))) : (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                var_13 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (signed char)-80)), ((+(4731679448719467850ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2243475373U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_3))))))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) 12361147569669279234ULL)))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((((((/* implicit */int) var_10)) + (2147483647))) >> (((var_8) - (6166346592848609095LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2056732239))))))) : (((/* implicit */int) (signed char)-79))));
                            var_16 = ((/* implicit */int) ((unsigned short) ((min((4731679448719467842ULL), (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) var_8)))));
                        }
                    } 
                } 
            }
            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_9);
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) (+(var_5)))) : (max((var_6), (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-111)))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [10ULL] [0LL] [i_0 + 1] [i_0 - 3] [i_0 + 1] [10ULL])) ? (arr_10 [6] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))) : ((+(var_8))))))));
            }
            for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                arr_23 [14ULL] [10LL] [i_1] [i_6] &= ((/* implicit */signed char) arr_5 [(_Bool)1] [14U]);
                var_18 = ((/* implicit */_Bool) min((max((72057594037927935ULL), (((/* implicit */unsigned long long int) (-(var_7)))))), (((/* implicit */unsigned long long int) var_9))));
            }
            /* vectorizable */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13715064624990083790ULL))));
                var_20 = -9068229069108628520LL;
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (72057594037927912ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_0)) : (18374686479671623676ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18374686479671623665ULL)) ? (9068229069108628518LL) : (((/* implicit */long long int) 303797565U)))))));
                var_22 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_16 [(short)8] [(short)8] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)88)))));
            }
        }
        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 2; i_9 < 13; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min(((+(var_5))), (min((((/* implicit */unsigned int) (unsigned short)44724)), (var_5))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_9))) + (((/* implicit */int) ((((/* implicit */long long int) var_5)) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0] [(signed char)15] [i_11] [i_11])) : (var_8))))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)124)) ? (var_0) : (((/* implicit */int) var_3)))) + (var_0)))) <= (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)124)), (var_10)))) ? (((/* implicit */long long int) var_4)) : (max((((/* implicit */long long int) var_3)), (-4247247667386798751LL)))))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) > (((((((/* implicit */_Bool) 2026191552U)) ? (8LL) : (((/* implicit */long long int) -717302217)))) % (min((773844978887525394LL), (((/* implicit */long long int) 2490900685U)))))))))));
        }
        for (short i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            arr_40 [i_0] [i_0] = ((unsigned int) ((unsigned int) 576460752303407104LL));
            arr_41 [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_12] [14LL] [i_12] [i_12])) | (((/* implicit */int) (signed char)-123))))) ? (((((/* implicit */_Bool) var_2)) ? (var_8) : (var_6))) : ((~(var_8)))));
        }
    }
}
