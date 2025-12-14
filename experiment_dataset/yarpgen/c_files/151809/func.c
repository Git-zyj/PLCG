/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151809
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 |= ((/* implicit */unsigned char) max((((unsigned long long int) 2591957281U)), (((/* implicit */unsigned long long int) ((int) (unsigned char)215)))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_1), (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))) : (min((((/* implicit */long long int) var_15)), (var_2))))), (((((/* implicit */_Bool) max((9174304860541869690ULL), (5026399142210157668ULL)))) ? (max((((/* implicit */long long int) (unsigned short)10165)), (-842035772308570774LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3650397926351685727ULL)) ? (986962700) : (((/* implicit */int) (signed char)117)))))))));
                    arr_8 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-23);
                    var_18 = ((/* implicit */short) var_12);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (short i_5 = 3; i_5 < 16; i_5 += 4) 
            {
                {
                    arr_17 [i_5] = ((/* implicit */unsigned short) (~(3650397926351685727ULL)));
                    arr_18 [i_3] [i_4] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) (_Bool)1))), (6428458095362003791LL)))), (((((((/* implicit */_Bool) var_16)) ? (18130273191972702863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) >> (((((/* implicit */int) var_16)) + (93)))))));
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) var_1)))) ? (((((/* implicit */_Bool) 5413792386115404497LL)) ? ((~(0ULL))) : (((3650397926351685727ULL) | (((/* implicit */unsigned long long int) 28672U)))))) : (max((0ULL), (((/* implicit */unsigned long long int) 0LL))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((3650397926351685727ULL) & (6254880217643443310ULL))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_12), (((/* implicit */unsigned long long int) (signed char)58)))))))))));
                var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (7811253617305390271LL)))), (316470881736848753ULL))), (((/* implicit */unsigned long long int) max((((long long int) (_Bool)1)), (((((/* implicit */_Bool) 7831396779273715776ULL)) ? (3376113700657608755LL) : (((/* implicit */long long int) 28679U)))))))));
                var_22 = ((/* implicit */unsigned short) (((_Bool)1) ? (1546465261U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123)))));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_23 -= var_14;
                        var_24 -= ((/* implicit */unsigned int) ((signed char) var_1));
                    }
                    var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 154831475U)) || (((/* implicit */_Bool) (unsigned char)133)))));
                    var_26 |= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_4)), (1142793355438719449ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91)))));
                }
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) ((unsigned long long int) ((((_Bool) 3965884835536744927ULL)) ? ((~(((/* implicit */int) (unsigned char)164)))) : (max((var_0), (((/* implicit */int) var_11)))))));
                    arr_31 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((max((((/* implicit */long long int) (_Bool)0)), (489879002428547617LL))), (((/* implicit */long long int) ((int) var_11))))) : (((long long int) (unsigned char)141))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_36 [i_6] [i_6] [i_6] [i_10] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)98))))) : (((unsigned int) var_11))))) ? (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) ^ (28679U)))) : (max((((/* implicit */unsigned long long int) (unsigned short)22127)), (max((((/* implicit */unsigned long long int) (unsigned char)123)), (var_10)))))));
                        arr_37 [i_6] [i_7] [i_11] [i_7] = ((/* implicit */int) (~(7137999420479654880LL)));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4198)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) max((((/* implicit */short) min((var_11), ((unsigned char)126)))), (max((((/* implicit */short) var_13)), ((short)-4199)))))) : (((/* implicit */int) (unsigned char)83))));
}
