/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18926
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(arr_0 [i_0])));
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (var_18)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
        arr_3 [6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)162)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        arr_6 [(signed char)5] [i_1] = ((/* implicit */unsigned short) var_12);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_17))));
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max(((!(((/* implicit */_Bool) (unsigned char)193)))), ((!((!(((/* implicit */_Bool) var_19)))))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((-1015582869) ^ (((/* implicit */int) (unsigned short)0)))))))));
                            var_24 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) arr_17 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 1])), (max((((/* implicit */short) var_3)), ((short)-11947)))))), (var_7)));
                            arr_19 [i_4] [i_4] [i_3] [0] [0] [(signed char)4] [i_4] = ((/* implicit */long long int) max((min((var_2), (((/* implicit */unsigned int) (unsigned char)63)))), (((/* implicit */unsigned int) arr_7 [(unsigned short)22]))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), ((unsigned char)193)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            arr_22 [i_1] [i_1 - 1] [i_2 + 3] [i_1 - 1] [(signed char)6] [i_4] [i_6 - 1] = ((/* implicit */unsigned long long int) (short)-11947);
                            arr_23 [i_3] [i_4] [i_3] [(signed char)14] [(_Bool)1] [(signed char)22] [(signed char)22] = min(((short)9565), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) -1385355627)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_8))));
                        }
                        arr_24 [i_1 + 1] [(_Bool)1] [i_4] [i_1 + 1] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 2] [i_2])) ^ (((/* implicit */int) (short)9552))))) ? (((/* implicit */int) arr_15 [i_1] [i_4] [i_4] [i_4 + 1] [i_2])) : ((~(((/* implicit */int) var_4))))))));
                        arr_25 [i_1 + 2] [i_4] [i_3] [i_4 - 1] [i_2 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [(unsigned char)8] [i_2 - 1] [i_2 + 3] [i_2 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 + 1] [i_4] [i_2] [i_4] [i_1])))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_13 [i_1] [3] [3] [i_1] [(unsigned short)9] [i_1]))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) arr_5 [i_7]);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_16)) ? (arr_5 [(unsigned short)6]) : (arr_5 [i_7]))), (min((((/* implicit */unsigned long long int) var_7)), ((~(var_18))))))))));
        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (short)-9553)) == (((/* implicit */int) var_14)))))));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 4; i_10 < 7; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_34 [(_Bool)1] [i_7] [i_9] [i_10 + 1]);
                            var_30 = ((/* implicit */_Bool) min(((~(arr_0 [i_9]))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-34)), ((short)-30596))))));
                            var_31 = ((/* implicit */unsigned short) min((((/* implicit */short) min(((unsigned char)63), (var_13)))), ((short)-9552)));
                            var_32 ^= max((((/* implicit */unsigned short) arr_32 [i_7] [i_7])), (arr_12 [i_7] [i_8] [i_8]));
                        }
                        var_33 = ((/* implicit */unsigned long long int) (unsigned char)63);
                    }
                } 
            } 
        } 
        arr_42 [i_7] [i_7] = ((/* implicit */unsigned short) min((min((arr_35 [i_7] [i_7] [i_7] [(unsigned char)5] [(unsigned char)5]), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)9553)))))));
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) (short)-9553);
        var_35 = ((/* implicit */short) var_4);
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (signed char)7))));
    }
    var_37 = ((/* implicit */long long int) ((unsigned long long int) var_8));
    var_38 = ((/* implicit */signed char) var_7);
}
