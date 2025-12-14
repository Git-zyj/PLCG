/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132081
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned long long int) 1417588732U)) : (2031616ULL))), (((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned char) arr_5 [i_2] [i_1] [i_1] [22ULL]))))))), (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) (short)63))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1417588732U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)3))))) : (min((140737488355327ULL), (arr_1 [i_1])))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-60)), (var_9)))) ? (((/* implicit */int) max(((signed char)63), ((signed char)60)))) : (((/* implicit */int) max(((signed char)-60), ((signed char)-36))))))), (((((/* implicit */_Bool) max((10296640414429917125ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15263703210288975602ULL)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (signed char)-49))))) : (((((/* implicit */_Bool) 1417588730U)) ? (8150103659279634491ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45579)))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned short)15] [0LL] [17ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_0] [(short)22])))) ? (max((18446744073709551611ULL), (15263703210288975602ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)48), (((/* implicit */signed char) var_7))))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4142808804416310428LL)) ? (((/* implicit */long long int) -1)) : (-5700485338943116061LL)))), (max((((/* implicit */unsigned long long int) var_12)), (arr_4 [i_2]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 261513436036554606LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-22233))))), (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28410))) : (arr_2 [2LL] [(unsigned short)20]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                {
                    var_22 += max((min((((((/* implicit */_Bool) -1147083396)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (max((((/* implicit */unsigned long long int) 6968332944897558047LL)), (3183040863420576013ULL))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_12 [i_5])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (-2890487549281414229LL)))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_4])) ? (10571490363929642855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        for (int i_7 = 4; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)48)), (7875253709779908738ULL)))) ? (((/* implicit */int) max((var_8), (var_9)))) : (((((/* implicit */_Bool) 8150103659279634482ULL)) ? (((/* implicit */int) (short)-7144)) : (((/* implicit */int) (short)25232))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13)))) ? (min((var_6), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-30043)) : (((/* implicit */int) arr_18 [3ULL] [i_4] [i_5] [i_6] [i_7])))))))) : (((((/* implicit */_Bool) (short)-4562)) ? (max((((/* implicit */unsigned long long int) 2831895168U)), (18033319570180426382ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-687020705))))))));
                                arr_21 [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) : (3959185183U)))), (min((((/* implicit */unsigned long long int) var_9)), (arr_4 [(_Bool)1])))))) ? (((((/* implicit */_Bool) 6114498201736050214ULL)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned char)231)))) : (((((/* implicit */_Bool) 10571490363929642863ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-41)), ((unsigned short)28757)))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)127)) : (1891505248)))))));
                                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)16605)) : (((/* implicit */int) (short)4563))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23260)) ? (13ULL) : (((/* implicit */unsigned long long int) 1891505244))))) ? (min((((/* implicit */unsigned long long int) max((48LL), (((/* implicit */long long int) var_3))))), (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_4 [i_5]) : (((/* implicit */unsigned long long int) -8306455342558077166LL)))))) : (max((min((9951297855719113892ULL), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) -9)) : (5652597554649097271ULL))))))))));
                                var_26 |= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (1282567685) : (((/* implicit */int) arr_16 [i_3] [i_4])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (17154782479962821769ULL)))) ? (((/* implicit */int) max(((signed char)91), (((/* implicit */signed char) arr_5 [i_3] [i_4] [i_3] [i_3]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [20ULL] [20ULL] [i_4])), (arr_8 [i_3]))))))) : (min((max((((/* implicit */unsigned long long int) (unsigned short)49747)), (12913943316173155858ULL))), (((/* implicit */unsigned long long int) min(((short)-30190), (((/* implicit */short) (unsigned char)228))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2067175860)) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])) : (var_14))) : (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (6162147810087036792ULL))))), (((((/* implicit */_Bool) max((11278717757095128852ULL), (((/* implicit */unsigned long long int) (signed char)14))))) ? (((((/* implicit */_Bool) (unsigned char)39)) ? (17154782479962821769ULL) : (12913943316173155863ULL))) : (min((((/* implicit */unsigned long long int) var_0)), (268435455ULL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((18446744073709551594ULL), (((/* implicit */unsigned long long int) 538001695))))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4563))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)54951)))) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (short)-29527)))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5075266643740722405ULL)) ? (((/* implicit */int) (unsigned short)1939)) : (((/* implicit */int) (signed char)38))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (14833608229384814161ULL))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3810791877U)), (1291961593746729863ULL)))) ? (((/* implicit */unsigned long long int) max((525398431704772105LL), (((/* implicit */long long int) (signed char)-29))))) : (max((((/* implicit */unsigned long long int) var_18)), (var_14)))))));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_12] [(unsigned short)0] [i_9]), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_9]), (((/* implicit */short) var_0)))))) : (((((/* implicit */_Bool) (short)31001)) ? (((/* implicit */long long int) ((/* implicit */int) (short)309))) : (3730571798412086821LL)))))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) arr_28 [i_9] [i_9]))))) ? (max((24ULL), (((/* implicit */unsigned long long int) var_6)))) : (max((arr_2 [i_8] [i_9]), (((/* implicit */unsigned long long int) arr_9 [i_11]))))))))));
                                arr_35 [i_9] [(signed char)10] [i_10] [i_8] [i_10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) -762636815)) ? (3358976541U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))), (((/* implicit */unsigned int) (unsigned char)122))));
                            }
                        } 
                    } 
                } 
                arr_36 [i_8] [i_9] [i_8] = max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3119643161U)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (short)-29535)))), (((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8] [i_8] [i_9])) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (signed char)-103))))))), (min((max((4100017889231083699ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((-2041192749), (((/* implicit */int) (unsigned char)131))))))));
            }
        } 
    } 
}
