/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180338
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = min(((-(((/* implicit */int) (_Bool)0)))), ((-(var_7))));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 2057864672)), (arr_3 [(unsigned short)12] [i_0])));
        var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 430371326589333954ULL)) ? (63ULL) : (18016372747120217679ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54773)) ? (2057864688) : (((/* implicit */int) (unsigned short)10765)))))));
        arr_5 [4] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)7))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-62)))))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_1] [i_0])), ((~(140737471578112LL)))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(1854652545)))) ? (((int) -20)) : ((~(var_10)))));
        }
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 18016372747120217662ULL)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) (unsigned short)35395)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58858))) : ((~(-140737471578112LL))))) : (((long long int) arr_6 [i_2 - 1] [i_2 - 1] [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                var_20 ^= ((/* implicit */unsigned short) max((18016372747120217701ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) - (430371326589333950ULL)))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (long long int i_5 = 4; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? ((~(430371326589333915ULL))) : (((unsigned long long int) var_9)))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)2047)), (var_9))))));
                            arr_20 [i_2] [i_4] [i_2] [(signed char)1] [i_2] = ((/* implicit */signed char) min(((unsigned short)15), (((/* implicit */unsigned short) (short)-19))));
                            arr_21 [i_2] = ((/* implicit */unsigned int) (+(18016372747120217679ULL)));
                            var_22 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_2] [12LL] [12LL]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)29341), (((/* implicit */unsigned short) (_Bool)1))))))))) >> (((max((((/* implicit */unsigned long long int) arr_1 [i_3])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) % (18016372747120217665ULL))))) - (65524ULL)))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (min((18016372747120217656ULL), (((/* implicit */unsigned long long int) 1379745683U)))) : (430371326589333943ULL)));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((((long long int) (unsigned short)15)) & (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)15706)), (2147483647))))));
                            arr_35 [i_0] [i_6] [i_6] [i_8] [i_8] [(_Bool)1] = ((/* implicit */long long int) ((var_12) < (arr_12 [i_0] [i_8])));
                            arr_36 [i_0] [i_6] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 0)), (3606987850U)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)51038))) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (signed char)7)))) : (((/* implicit */int) ((signed char) min((var_11), (((/* implicit */unsigned long long int) var_14))))))));
                        }
                    } 
                } 
            }
            for (int i_10 = 2; i_10 < 12; i_10 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((18016372747120217643ULL), (((/* implicit */unsigned long long int) (unsigned short)18858))))) ? (((/* implicit */int) (unsigned short)49813)) : (((int) (short)-10719))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 18016372747120217699ULL))) ? (((((/* implicit */int) (unsigned short)65521)) ^ (((((/* implicit */_Bool) 6847133295158994844LL)) ? (-1) : (((/* implicit */int) (short)1171)))))) : ((((+(((/* implicit */int) (unsigned short)3839)))) & (((/* implicit */int) (unsigned char)31))))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_27 = ((/* implicit */int) var_14);
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)63982))));
                        arr_45 [i_0] [i_10] [i_0] [i_11] [i_12] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (2915221605U)))));
                    }
                    for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        arr_48 [i_0] [i_6] [i_10] [i_11] [i_13] [i_10] = min((min((5977573251993039006LL), (((/* implicit */long long int) (unsigned short)14)))), (((/* implicit */long long int) ((1379745684U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521)))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((var_0), (min(((unsigned char)41), ((unsigned char)195))))))));
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-843184137)))) ? (((((/* implicit */_Bool) (signed char)-82)) ? (430371326589333930ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) (_Bool)0))))) ? ((~(5977573251993039000LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_51 [11LL] [11LL] [i_10] [i_10] [i_11] [i_14] = ((/* implicit */signed char) var_11);
                        arr_52 [i_14] [i_14] [i_10] [i_11] [i_10] [8U] [i_0] = min((((/* implicit */int) var_5)), (((((/* implicit */int) arr_42 [i_11] [i_6] [i_11] [i_10 - 1] [i_0] [i_0])) | (((((/* implicit */int) arr_44 [i_0] [i_0] [(unsigned short)11] [i_10 - 1] [i_11] [i_14])) ^ (((/* implicit */int) (signed char)23)))))));
                    }
                    for (signed char i_15 = 2; i_15 < 14; i_15 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) (~(((unsigned long long int) arr_34 [i_10 - 1] [i_10 + 3] [i_10]))));
                        arr_56 [i_0] [i_6] [i_10] [i_11] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_7)), ((-(((((/* implicit */_Bool) 15425162966027992778ULL)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_32 = ((/* implicit */unsigned int) max((max((-1), (((/* implicit */int) (unsigned short)7818)))), ((+(arr_25 [i_15 + 1] [i_11] [i_0])))));
                    }
                    var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)214)), (((int) var_2))))) ? (((((/* implicit */_Bool) max((var_0), ((unsigned char)155)))) ? (arr_54 [i_10 + 3] [i_0] [12] [i_11] [i_0] [i_10 - 1]) : (1379745684U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-94)))))));
                }
                var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-24812)), (15425162966027992764ULL)));
            }
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (+(891811135953643976ULL))))));
        }
        for (int i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            arr_60 [i_16] [i_16] [i_16] = ((/* implicit */signed char) (~(15852560323787964707ULL)));
            var_36 *= ((/* implicit */short) ((_Bool) max((((/* implicit */long long int) min((((/* implicit */int) (short)-2295)), (-879051294)))), (((((/* implicit */_Bool) 1885357508)) ? (var_3) : (((/* implicit */long long int) 3999074738U)))))));
            arr_61 [(unsigned short)13] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_12))) ? (((int) 2915221605U)) : (var_7)))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))) ? (((unsigned int) -2)) : (((/* implicit */unsigned int) ((var_4) - (((/* implicit */int) (unsigned char)155))))))) : (1577492478U));
            var_37 = ((/* implicit */int) ((short) -1));
            arr_62 [i_16] [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))), ((-(5708556570891595330ULL)))))));
        }
    }
    var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_13)))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)21987)))))) * (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (short)-7032)) : (((/* implicit */int) (signed char)-89))))));
}
