/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136019
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [20U] [i_2] |= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)57)), ((unsigned short)5)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 -= max((max((max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_0] [i_3 - 2] [i_4] [i_1])), (var_15)))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_7 [i_3] [i_3] [i_3])), (var_6)))), (max((2764577836314374143LL), (((/* implicit */long long int) var_0)))))));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */int) max((max((((/* implicit */unsigned int) max(((unsigned short)65530), (((/* implicit */unsigned short) (unsigned char)57))))), (min((((/* implicit */unsigned int) (unsigned char)52)), (121266436U))))), (((/* implicit */unsigned int) (unsigned short)60554))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((var_14), (((/* implicit */unsigned int) 1991806179))))), (min((-2764577836314374144LL), (((/* implicit */long long int) (unsigned char)193)))))), (max((((/* implicit */long long int) max((arr_12 [i_0] [i_0] [i_2] [15LL] [i_1] [(unsigned char)15]), (((/* implicit */unsigned int) (_Bool)0))))), (max((-2764577836314374144LL), (((/* implicit */long long int) 4294967285U))))))));
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((max((-23), (((/* implicit */int) var_2)))), (min((((/* implicit */int) (_Bool)1)), (-1)))))), (max((max((((/* implicit */long long int) 4194303U)), (var_13))), (((/* implicit */long long int) max(((unsigned char)38), (((/* implicit */unsigned char) (_Bool)1)))))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned char)195)), (0U))), (((/* implicit */unsigned int) max((max((var_18), (var_18))), (((/* implicit */int) max(((unsigned char)137), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [(unsigned short)2] [i_0] [i_0]))))))))));
        arr_16 [(_Bool)1] = ((/* implicit */_Bool) max((min((min((((/* implicit */long long int) arr_7 [4] [(unsigned short)4] [i_0])), (2764577836314374150LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_15)), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */long long int) min((max((727617370U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) min(((unsigned char)140), ((unsigned char)134)))))))));
        arr_17 [i_0] &= ((/* implicit */_Bool) min((max((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)236)), (arr_6 [i_0] [i_0])))), (min((((/* implicit */long long int) var_5)), (var_13))))), (max((((/* implicit */long long int) max(((unsigned char)199), ((unsigned char)92)))), (min((((/* implicit */long long int) 4294967285U)), (-9LL)))))));
    }
    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
    {
        arr_21 [i_5] = max((((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_9 [i_5 - 2] [i_5] [i_5] [i_5 - 1])), (127U))), (((/* implicit */unsigned int) min((8355840), (((/* implicit */int) var_0)))))))), (min((max((var_13), (((/* implicit */long long int) arr_0 [i_5 - 3])))), (((/* implicit */long long int) min((var_3), (4250356027U)))))));
        var_23 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned int) arr_18 [i_5])), (arr_6 [i_5] [i_5 + 1]))), (max((var_5), (((/* implicit */unsigned int) arr_9 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2])))))), (max((max((44611268U), (((/* implicit */unsigned int) (unsigned short)37942)))), (4294967169U)))));
        var_24 = max((((/* implicit */unsigned int) min(((unsigned char)206), (max(((unsigned char)57), ((unsigned char)243)))))), (max((min((((/* implicit */unsigned int) arr_10 [(unsigned char)12] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])), (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (min((var_3), (((/* implicit */unsigned int) var_4)))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) min((var_25), (2475636173915882580LL)));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (unsigned char)239))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((min((max((2475636173915882585LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned short) var_4))))))), (((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_10)), (var_5))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_17)), (var_16))))))))))));
    var_28 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned int) var_17)), (var_3))), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)0)))))), (min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), (var_15)))), (max((((/* implicit */unsigned int) (_Bool)1)), (var_5)))))));
    var_29 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) max(((unsigned char)107), (((/* implicit */unsigned char) var_17))))), (max((var_9), (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (max(((unsigned short)41472), ((unsigned short)7))))))));
}
