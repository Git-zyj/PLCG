/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103956
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
    var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((2016529119U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) ? (max((2813722431U), (((/* implicit */unsigned int) -612816377)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((2458339098137616475LL) - (2458339098137616475LL))))))))), (5378958222802446376LL)));
    var_14 = ((/* implicit */long long int) (((~(max((((/* implicit */int) var_5)), (4194303))))) < (((/* implicit */int) ((((/* implicit */_Bool) 4194310)) || ((((_Bool)1) || (((/* implicit */_Bool) 2016529119U)))))))));
    var_15 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4273593027U))), ((-(4273593027U))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (var_3)))))))));
    var_16 = ((/* implicit */int) ((unsigned int) ((var_2) ? (min((((/* implicit */unsigned int) var_1)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (min((var_6), (((/* implicit */unsigned long long int) (short)29359)))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -4194303)) ? (2932962882U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11415)))))))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_0) | (1481244864U)))) ? (((((/* implicit */_Bool) 21374268U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))) : (max((arr_5 [i_1 + 2] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1])))))), (((((/* implicit */_Bool) 7994913831257007702ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((2197746284U), (((/* implicit */unsigned int) (short)-32756))))))));
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 9773839783626457292ULL)) ? (-1) : (((/* implicit */int) arr_3 [i_1 - 1]))))) ? (max((((/* implicit */int) (signed char)(-127 - 1))), (var_3))) : (((/* implicit */int) ((((/* implicit */long long int) 657265018U)) <= (-6034332741840543525LL))))))));
        var_18 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) 822157385)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (signed char)-106))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) 15962295777766086538ULL)) ? (((/* implicit */int) (signed char)-48)) : (max((4194303), (((/* implicit */int) (signed char)-106))))));
                    var_20 &= ((/* implicit */unsigned short) ((6034332741840543525LL) / (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3]))))))))));
                    arr_18 [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)47))))) : (6034332741840543524LL)))) ? (var_9) : (((((/* implicit */int) (unsigned short)22)) + ((~(((/* implicit */int) arr_11 [i_2]))))))));
                }
            } 
        } 
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (arr_8 [i_2]) : (((/* implicit */long long int) 2016529131U)))) < (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (unsigned short)47511)) : (((/* implicit */int) var_7))))))))) - (((((/* implicit */_Bool) arr_9 [i_2])) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        arr_20 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3605024510U)) ? (var_9) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [(unsigned short)4]))) : (max((arr_8 [i_2]), (((/* implicit */long long int) var_4))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */int) (unsigned short)12325)) / (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (signed char)-48))))))) : ((+((+(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_21 = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64512)) ? (21374293U) : (((/* implicit */unsigned int) -2016158050))))) + (max((1017282240216677121ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_22 += ((/* implicit */unsigned int) 1943953091303342354LL);
                        var_23 = ((/* implicit */unsigned long long int) -2016158043);
                        var_24 &= ((/* implicit */unsigned long long int) (+(max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3122819424U))), (((/* implicit */unsigned int) -2016158043))))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */int) (_Bool)0);
    }
}
