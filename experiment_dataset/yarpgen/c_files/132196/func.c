/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132196
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~((+(266338304))))))));
    var_17 = ((/* implicit */unsigned char) 711274369);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_9))))) || (((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned char)121)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [2ULL] = ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) arr_8 [i_0] [14ULL] [(unsigned short)4] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29788))) : (arr_0 [i_1 + 1] [i_2]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) arr_9 [i_2] [i_0] [0LL] [i_0])) : (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_14);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_4))));
                        var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(max((var_11), (((/* implicit */unsigned int) (unsigned char)164))))))) ? (((((/* implicit */_Bool) ((int) arr_9 [i_0] [9U] [(short)11] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) : (((long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(var_6))))))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_3 + 1] [13LL] [i_3 + 1] [i_3 + 1])), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (var_10)))) : (min((arr_8 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned long long int) var_5))))));
                    }
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_7))) ? ((((!(((/* implicit */_Bool) (signed char)77)))) ? (((int) arr_6 [(unsigned char)1] [(unsigned char)1] [i_2 - 4])) : (((/* implicit */int) arr_5 [(signed char)10])))) : (((/* implicit */int) ((unsigned char) arr_11 [8]))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+((-(((/* implicit */int) var_4)))))))));
        var_24 |= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)18181));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                    arr_22 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) var_15);
        arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)27948))))) && (((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1110713670)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1110713682)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_7))))) : (var_3)));
                    arr_28 [i_7] = ((/* implicit */unsigned short) ((unsigned char) 1110713683));
                }
            } 
        } 
        var_28 ^= ((/* implicit */unsigned int) arr_2 [i_4]);
    }
    var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (unsigned short)47231)))) : (var_0)))));
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((17615250499928190309ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1525)) * (((/* implicit */int) (short)-11027)))))))) && (((/* implicit */_Bool) -68719476736LL))));
}
