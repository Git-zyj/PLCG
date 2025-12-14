/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185742
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(7046369056304396300ULL)))))))) - ((~(min((((/* implicit */unsigned long long int) var_1)), (17348552783597804062ULL))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 4; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) 11400375017405155315ULL);
                        var_15 = ((((int) ((((/* implicit */int) (unsigned short)63396)) / (((/* implicit */int) var_10))))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (268435392LL) : (((/* implicit */long long int) var_0))))) || (((/* implicit */_Bool) var_6))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 11400375017405155332ULL)))) ? (((/* implicit */int) arr_1 [i_2 - 4])) : (((/* implicit */int) (!(arr_7 [i_1] [i_2] [i_1]))))))) ? (max((11400375017405155330ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) : (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                        arr_9 [i_3 + 1] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((8ULL), (9534136067628842340ULL)));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 7091175670753116579LL)) ? (((/* implicit */int) (unsigned char)10)) : (1730683126))) >> (((min((52066616717935829ULL), (11400375017405155304ULL))) - (52066616717935819ULL)))));
    }
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_1))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10443)) ? (((/* implicit */unsigned long long int) 960923275U)) : (arr_17 [i_4] [i_6 + 1] [i_4] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((6689065813149028842ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2140))))), (min((10607548382967462044ULL), (5647912565964913867ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (+(-8410009991070083372LL)));
                                var_22 = arr_17 [i_4] [i_4] [i_6] [i_6];
                                arr_23 [i_4] [i_6] = ((/* implicit */unsigned long long int) (signed char)67);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((16470519805315809670ULL), (((/* implicit */unsigned long long int) -8410009991070083372LL))))) ? ((+(arr_21 [i_6 - 1] [i_6] [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_8 - 3] [i_6] [i_6 - 1] [(signed char)15] [i_6] [i_6]), (arr_22 [i_8 + 2] [i_6] [i_6 - 1] [i_6] [i_6] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        var_24 ^= arr_25 [i_4] [i_5] [i_5] [i_9];
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 10ULL))));
                        var_26 -= ((/* implicit */signed char) (_Bool)0);
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19207))) + (1U))))));
                        var_28 = (!(((/* implicit */_Bool) max((var_3), (18446744073709551605ULL)))));
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)53742)) ? (((/* implicit */int) (unsigned short)52345)) : (303531197)))))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-4)), ((unsigned short)34410))))) >= (4217982773U)));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_4))));
                        var_32 *= ((/* implicit */long long int) (-(((/* implicit */int) ((arr_19 [i_6 - 1] [i_6 - 1] [i_5] [i_5]) > (4761549434629524359ULL))))));
                        arr_31 [i_6] = ((/* implicit */signed char) ((unsigned char) var_3));
                    }
                }
            } 
        } 
    }
}
