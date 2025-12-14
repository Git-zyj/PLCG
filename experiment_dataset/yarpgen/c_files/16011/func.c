/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16011
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
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))))))) : (((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (7292573611930805165LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((+(-2825955073515339216LL))) | (((/* implicit */long long int) (((-(var_0))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7))))))))))))));
        var_17 -= ((/* implicit */int) (+(((var_8) ? (var_7) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_3] [i_2] [(signed char)18] [11] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                        var_18 -= ((/* implicit */int) var_9);
                        arr_10 [i_0] [i_0] [(signed char)10] [i_0] [(signed char)22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (var_10)))))));
                    }
                } 
            } 
        } 
        arr_11 [(unsigned short)16] = ((/* implicit */short) ((signed char) var_9));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_4] [i_5] [i_7] = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (var_10))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (var_3))) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            arr_25 [i_4] [i_5] [23ULL] [10LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (short i_10 = 2; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_5))))))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_5)))))) == (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)))))));
                arr_36 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3832148077228935375LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1055657272U)) && (((/* implicit */_Bool) 711238020U)))))) : (((((/* implicit */_Bool) -8042099087389763196LL)) ? (((/* implicit */unsigned long long int) -943640630)) : (6138011074104599019ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((var_4) >= (((/* implicit */unsigned long long int) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_5))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)-4)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */long long int) 485415882U)) - (8677350933710766823LL)))))))));
                            arr_44 [i_11] [i_4] [i_12] = ((/* implicit */int) ((signed char) ((unsigned int) var_8)));
                        }
                    } 
                } 
                arr_45 [(_Bool)1] [5ULL] [(signed char)0] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) ((_Bool) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) var_12))))) : (((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
            }
            for (unsigned short i_13 = 1; i_13 < 21; i_13 += 3) 
            {
                var_23 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7673)) ? (10184658354214031201ULL) : (((/* implicit */unsigned long long int) 512912463U))))) ? (((-5826177088108357751LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)134))))))));
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4478920992331351287LL)))) ? (((/* implicit */int) (_Bool)1)) : (-1686459313)));
                arr_48 [i_13] [4] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(-7200556386221327241LL)))) : ((+(((var_12) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                arr_49 [8ULL] [6] [i_13] [i_13] &= ((/* implicit */int) ((var_7) / (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))));
            }
            for (short i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (+(11456429616274693730ULL))))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */int) ((14514621375123926460ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768)))));
                            arr_59 [i_16] [(signed char)15] = var_13;
                            arr_60 [i_16] [3] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (var_0)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))))) ? ((~(((((/* implicit */unsigned int) var_13)) ^ (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((signed char) var_4))))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)32740)))))));
            }
            arr_61 [i_0] = ((/* implicit */short) (((!((!(((/* implicit */_Bool) (signed char)0)))))) || (((/* implicit */_Bool) var_13))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
        {
            arr_65 [i_0] [i_17] |= ((/* implicit */int) ((short) (-2147483647 - 1)));
            arr_66 [i_0] [i_0] [i_17] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - ((~(4079630597391181410ULL)))));
        }
    }
    var_29 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) 4294967283U)))) ? (((var_12) ? (var_11) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_8))))))));
}
