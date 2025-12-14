/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186102
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned int) ((int) arr_7 [i_2] [15] [(signed char)14] [i_2]));
                    arr_8 [i_2] = ((/* implicit */unsigned short) 4294967295U);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_11 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 10081253360756621514ULL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58161))) > (18390327632873497613ULL)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)26760)) == (-45069564))))));
                                arr_15 [16] [17U] [(short)19] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [(_Bool)0] [i_1] [i_2] [i_2 - 2] [i_4])) | (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_18 [i_2] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [(unsigned short)19] [i_2 - 1] [i_2] [i_2]))));
                        var_12 = ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_1] [i_2] [i_2] [i_2 - 2]) : (2147483647));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (2147483647) : (((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -896911061)) || ((_Bool)1))))) : (var_5)));
                            arr_21 [i_0] [i_5] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_20 [i_6] [(unsigned short)22] [i_2] [i_1] [i_0]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_25 [i_7] [(_Bool)1] [i_2] [i_5] [i_7] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)235)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : (var_7)));
                            var_14 = (unsigned char)3;
                            var_15 = ((/* implicit */unsigned short) var_2);
                            arr_26 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17665)) ? (17240313043506902348ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                            var_16 = ((/* implicit */int) arr_19 [i_0] [i_5] [i_7]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            {
                                arr_33 [i_0] [i_2] [i_0] [i_0] [3U] [(short)9] [i_0] = ((((/* implicit */_Bool) arr_14 [i_2 + 2] [19LL] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_20 [(unsigned short)9] [i_2 - 1] [21] [i_8 - 1] [(_Bool)0])) : (((/* implicit */int) arr_29 [i_2 - 1] [i_2] [i_8 + 1] [i_8 - 1] [i_8])));
                                var_17 = ((/* implicit */_Bool) var_6);
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_9] [17U] [i_9] [i_8] [i_8 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 23; i_10 += 3) 
                {
                    arr_36 [i_0] [i_1] [i_10] [(unsigned char)0] = ((/* implicit */unsigned short) ((_Bool) ((33030144) / (var_0))));
                    var_19 = ((/* implicit */int) arr_22 [(unsigned char)18]);
                }
                var_20 = ((/* implicit */unsigned short) min(((~(((-1526391080) ^ (((/* implicit */int) var_4)))))), (min((((/* implicit */int) max((var_8), ((unsigned short)17665)))), (((((/* implicit */_Bool) 2025841783)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_5)) ? ((-(938427916))) : (((/* implicit */int) var_6)))));
}
