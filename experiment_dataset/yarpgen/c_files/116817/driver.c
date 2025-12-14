#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4546007698648216191ULL;
unsigned long long int var_1 = 7949355292354396965ULL;
unsigned long long int var_2 = 6290604149679533575ULL;
unsigned long long int var_3 = 6215300637182931957ULL;
unsigned long long int var_4 = 4384808720307179290ULL;
unsigned long long int var_5 = 14528050236197342755ULL;
unsigned long long int var_6 = 6340066414364097834ULL;
unsigned long long int var_7 = 10462273846337505730ULL;
unsigned long long int var_8 = 7356192145590994177ULL;
unsigned long long int var_9 = 9716561414887957905ULL;
unsigned long long int var_10 = 4632132610522949997ULL;
unsigned long long int var_11 = 9903513507020523528ULL;
unsigned long long int var_12 = 15181257637040673015ULL;
unsigned long long int var_13 = 10977787103644683199ULL;
unsigned long long int var_14 = 7580012515864647277ULL;
unsigned long long int var_15 = 11427540571696350072ULL;
unsigned long long int var_16 = 10652651526376316962ULL;
unsigned long long int var_17 = 16504498894329631342ULL;
unsigned long long int var_18 = 1914748956239250420ULL;
unsigned long long int var_19 = 5577228762077796953ULL;
int zero = 0;
unsigned long long int var_20 = 13876254290374853234ULL;
unsigned long long int var_21 = 7472173297492138279ULL;
unsigned long long int var_22 = 9447242842471514920ULL;
unsigned long long int var_23 = 11981496983649101595ULL;
unsigned long long int var_24 = 15100304778814566357ULL;
unsigned long long int var_25 = 3710087360262040910ULL;
unsigned long long int var_26 = 10725709182253204192ULL;
unsigned long long int var_27 = 5828421725137992528ULL;
unsigned long long int var_28 = 549912810903998162ULL;
unsigned long long int var_29 = 7790345226540522644ULL;
unsigned long long int var_30 = 10728981832806453420ULL;
unsigned long long int var_31 = 8346553757522449170ULL;
unsigned long long int var_32 = 5087209266915929191ULL;
unsigned long long int var_33 = 5387810999234085575ULL;
unsigned long long int var_34 = 3344119947021790892ULL;
unsigned long long int var_35 = 12413551062617118476ULL;
unsigned long long int var_36 = 9625012019228639175ULL;
unsigned long long int var_37 = 5348907864554914236ULL;
unsigned long long int var_38 = 11119754239481764407ULL;
unsigned long long int var_39 = 5678042945356201846ULL;
unsigned long long int var_40 = 4924617566830149816ULL;
unsigned long long int var_41 = 2005317696730005593ULL;
unsigned long long int var_42 = 13167932648539482424ULL;
unsigned long long int var_43 = 15269026257603854310ULL;
unsigned long long int var_44 = 6516919335508302038ULL;
unsigned long long int var_45 = 14994422388953041193ULL;
unsigned long long int var_46 = 18112536406166150686ULL;
unsigned long long int var_47 = 17484901267096844921ULL;
unsigned long long int var_48 = 14323204537793851088ULL;
unsigned long long int var_49 = 5987236860903173101ULL;
unsigned long long int var_50 = 10035545765613659985ULL;
unsigned long long int var_51 = 5946203495031507581ULL;
unsigned long long int var_52 = 14750630266861438812ULL;
unsigned long long int var_53 = 10265752529726635263ULL;
unsigned long long int var_54 = 613369426654131840ULL;
unsigned long long int var_55 = 1596262077426585061ULL;
unsigned long long int var_56 = 10570465238446320284ULL;
unsigned long long int var_57 = 1768513197729215131ULL;
unsigned long long int var_58 = 11007990143734500812ULL;
unsigned long long int var_59 = 11944484951693746126ULL;
unsigned long long int var_60 = 12788262656129127262ULL;
unsigned long long int var_61 = 4881653436829603523ULL;
unsigned long long int var_62 = 14175095695163858458ULL;
unsigned long long int var_63 = 4556415934927461131ULL;
unsigned long long int var_64 = 14900052239269110759ULL;
unsigned long long int var_65 = 16152261845639257282ULL;
unsigned long long int var_66 = 3030692297960405710ULL;
unsigned long long int var_67 = 14186113681483306625ULL;
unsigned long long int var_68 = 17458811253885058315ULL;
unsigned long long int var_69 = 14479738374165263560ULL;
unsigned long long int var_70 = 6519533256423045270ULL;
unsigned long long int var_71 = 17016165772805679436ULL;
unsigned long long int var_72 = 4367782624971811465ULL;
unsigned long long int var_73 = 3306070688475387044ULL;
unsigned long long int var_74 = 11390372484757413943ULL;
unsigned long long int var_75 = 5494351691164915901ULL;
unsigned long long int var_76 = 16527026794997907463ULL;
unsigned long long int var_77 = 12317591878685137579ULL;
unsigned long long int var_78 = 5194767117515070406ULL;
unsigned long long int var_79 = 1048086028058890757ULL;
unsigned long long int var_80 = 5227046800245371770ULL;
unsigned long long int var_81 = 8923528309132973570ULL;
unsigned long long int var_82 = 2314991120905915238ULL;
unsigned long long int var_83 = 13856482407916822099ULL;
unsigned long long int var_84 = 14766572712057678109ULL;
unsigned long long int var_85 = 7433434796075402358ULL;
unsigned long long int var_86 = 10752284330236005855ULL;
unsigned long long int var_87 = 3744221679447861626ULL;
unsigned long long int var_88 = 11257084933561003847ULL;
unsigned long long int var_89 = 3949995387764126643ULL;
unsigned long long int var_90 = 12727261350722653672ULL;
unsigned long long int var_91 = 538605978230273980ULL;
unsigned long long int var_92 = 1633616145329718580ULL;
unsigned long long int var_93 = 4825518135689122116ULL;
unsigned long long int var_94 = 4698858169686191244ULL;
unsigned long long int var_95 = 10594559968989619093ULL;
unsigned long long int var_96 = 9269797332378599286ULL;
unsigned long long int var_97 = 1792351659525751020ULL;
unsigned long long int var_98 = 15423708357574407574ULL;
unsigned long long int var_99 = 996238014595359200ULL;
unsigned long long int var_100 = 15530425731874846056ULL;
unsigned long long int var_101 = 9474830880637766760ULL;
unsigned long long int var_102 = 3923871079750365810ULL;
unsigned long long int var_103 = 2999361387301338785ULL;
unsigned long long int var_104 = 5213759694045784761ULL;
unsigned long long int var_105 = 6234462583149931676ULL;
unsigned long long int var_106 = 112032445197390564ULL;
unsigned long long int var_107 = 17472044623055343974ULL;
unsigned long long int var_108 = 14008479694091141570ULL;
unsigned long long int var_109 = 860854047907349874ULL;
unsigned long long int var_110 = 15764087330861731775ULL;
unsigned long long int var_111 = 2483230909925722131ULL;
unsigned long long int var_112 = 15095524684328819709ULL;
unsigned long long int var_113 = 8603438958933678449ULL;
unsigned long long int var_114 = 14640970597655118062ULL;
unsigned long long int var_115 = 5429262122666088044ULL;
unsigned long long int var_116 = 1869031769345742488ULL;
unsigned long long int var_117 = 4633167347839815963ULL;
unsigned long long int var_118 = 13940444279798244362ULL;
unsigned long long int var_119 = 16295800886866184444ULL;
unsigned long long int var_120 = 18004087086033823085ULL;
unsigned long long int var_121 = 10966677067984527939ULL;
unsigned long long int var_122 = 14556355315644582644ULL;
unsigned long long int var_123 = 9466515473616178328ULL;
unsigned long long int var_124 = 16926357830576853398ULL;
unsigned long long int var_125 = 12694102479355271985ULL;
unsigned long long int var_126 = 11198321996377450691ULL;
unsigned long long int var_127 = 6907212916822742025ULL;
unsigned long long int var_128 = 8464552459854104497ULL;
unsigned long long int var_129 = 4912701538409760781ULL;
unsigned long long int var_130 = 13982967526435426900ULL;
unsigned long long int var_131 = 3033251279939157175ULL;
unsigned long long int var_132 = 6083559233032915778ULL;
unsigned long long int var_133 = 3170869702723609704ULL;
unsigned long long int var_134 = 17454773793592766122ULL;
unsigned long long int var_135 = 17830391143592710980ULL;
unsigned long long int var_136 = 14804667862045642365ULL;
unsigned long long int var_137 = 6598148390094535189ULL;
unsigned long long int var_138 = 9919732193990364635ULL;
unsigned long long int var_139 = 6355512234295850534ULL;
unsigned long long int var_140 = 8810896865452060962ULL;
unsigned long long int var_141 = 1730969020246559957ULL;
unsigned long long int var_142 = 17735580229219158391ULL;
unsigned long long int var_143 = 15243431758284318009ULL;
unsigned long long int var_144 = 17804270294092875921ULL;
unsigned long long int var_145 = 7450515814840871801ULL;
unsigned long long int var_146 = 9934759722552568752ULL;
unsigned long long int var_147 = 1757090349830596167ULL;
unsigned long long int var_148 = 12411083287168384297ULL;
unsigned long long int var_149 = 12538205058516667159ULL;
unsigned long long int var_150 = 16070977137790494824ULL;
unsigned long long int var_151 = 5163677272071861941ULL;
unsigned long long int var_152 = 12894998422576558369ULL;
unsigned long long int var_153 = 5551312627727576086ULL;
unsigned long long int var_154 = 1616593349998739976ULL;
unsigned long long int var_155 = 13913527078435697385ULL;
unsigned long long int var_156 = 1856639928447969082ULL;
unsigned long long int var_157 = 15091047293452526041ULL;
unsigned long long int var_158 = 16076222623297774804ULL;
unsigned long long int var_159 = 3412418690596881397ULL;
unsigned long long int var_160 = 7476648386389708141ULL;
unsigned long long int var_161 = 9899292433309113091ULL;
unsigned long long int var_162 = 18108917209105009487ULL;
unsigned long long int var_163 = 1285749581522595597ULL;
unsigned long long int var_164 = 4357932892137222414ULL;
unsigned long long int var_165 = 1035138827895479666ULL;
unsigned long long int var_166 = 2362849254412377910ULL;
unsigned long long int var_167 = 11157578263717756581ULL;
unsigned long long int var_168 = 12621488669943753537ULL;
unsigned long long int var_169 = 346482710699535829ULL;
unsigned long long int var_170 = 9881259284676048407ULL;
unsigned long long int var_171 = 9295526496932921330ULL;
unsigned long long int var_172 = 8508321734662616725ULL;
unsigned long long int var_173 = 16158265447111853524ULL;
unsigned long long int var_174 = 13814605174591203846ULL;
unsigned long long int var_175 = 13479313094899931378ULL;
unsigned long long int var_176 = 2040835204577518904ULL;
unsigned long long int var_177 = 4526157521635751232ULL;
unsigned long long int var_178 = 1292684211103037186ULL;
unsigned long long int var_179 = 9925750157645175115ULL;
unsigned long long int arr_0 [14] [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] [14] ;
unsigned long long int arr_7 [14] ;
unsigned long long int arr_8 [14] [14] ;
unsigned long long int arr_9 [14] [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] ;
unsigned long long int arr_12 [14] [14] [14] [14] ;
unsigned long long int arr_18 [14] [14] [14] ;
unsigned long long int arr_19 [14] [14] [14] [14] ;
unsigned long long int arr_21 [14] [14] [14] [14] [14] ;
unsigned long long int arr_22 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_23 [14] [14] [14] [14] ;
unsigned long long int arr_24 [14] [14] ;
unsigned long long int arr_25 [14] [14] [14] [14] [14] ;
unsigned long long int arr_26 [14] [14] [14] [14] ;
unsigned long long int arr_28 [14] [14] ;
unsigned long long int arr_29 [14] ;
unsigned long long int arr_30 [14] [14] [14] [14] [14] ;
unsigned long long int arr_32 [14] [14] [14] ;
unsigned long long int arr_33 [14] ;
unsigned long long int arr_34 [14] [14] [14] [14] [14] ;
unsigned long long int arr_37 [14] ;
unsigned long long int arr_38 [14] [14] [14] [14] [14] ;
unsigned long long int arr_42 [14] [14] [14] [14] ;
unsigned long long int arr_43 [14] [14] [14] [14] [14] ;
unsigned long long int arr_44 [14] [14] [14] [14] [14] ;
unsigned long long int arr_45 [14] [14] ;
unsigned long long int arr_47 [14] [14] [14] [14] ;
unsigned long long int arr_48 [14] [14] ;
unsigned long long int arr_50 [14] [14] [14] [14] [14] ;
unsigned long long int arr_51 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_52 [14] [14] [14] [14] [14] ;
unsigned long long int arr_54 [14] [14] [14] ;
unsigned long long int arr_56 [14] [14] [14] [14] ;
unsigned long long int arr_59 [14] [14] [14] [14] ;
unsigned long long int arr_60 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_61 [14] [14] [14] [14] ;
unsigned long long int arr_63 [14] [14] [14] [14] [14] ;
unsigned long long int arr_64 [14] [14] [14] [14] ;
unsigned long long int arr_65 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_68 [14] [14] [14] ;
unsigned long long int arr_70 [14] [14] [14] [14] ;
unsigned long long int arr_71 [14] ;
unsigned long long int arr_72 [14] [14] [14] [14] ;
unsigned long long int arr_77 [14] [14] ;
unsigned long long int arr_82 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_84 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_85 [14] [14] ;
unsigned long long int arr_89 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_94 [14] [14] [14] [14] ;
unsigned long long int arr_95 [14] [14] [14] [14] ;
unsigned long long int arr_99 [14] [14] ;
unsigned long long int arr_103 [14] [14] [14] [14] [14] ;
unsigned long long int arr_104 [14] [14] [14] [14] [14] ;
unsigned long long int arr_105 [14] [14] [14] ;
unsigned long long int arr_106 [14] [14] [14] [14] [14] ;
unsigned long long int arr_111 [14] [14] [14] [14] [14] ;
unsigned long long int arr_112 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_114 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_116 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_118 [14] [14] [14] [14] ;
unsigned long long int arr_129 [14] [14] [14] [14] ;
unsigned long long int arr_130 [14] [14] ;
unsigned long long int arr_132 [14] [14] ;
unsigned long long int arr_135 [14] [14] [14] ;
unsigned long long int arr_138 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_139 [14] [14] [14] [14] [14] ;
unsigned long long int arr_142 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_143 [14] [14] [14] [14] [14] ;
unsigned long long int arr_145 [14] [14] ;
unsigned long long int arr_146 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_147 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_152 [14] [14] [14] ;
unsigned long long int arr_168 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_172 [14] [14] ;
unsigned long long int arr_182 [14] ;
unsigned long long int arr_184 [14] [14] [14] [14] [14] ;
unsigned long long int arr_188 [14] [14] [14] [14] ;
unsigned long long int arr_192 [14] [14] [14] [14] ;
unsigned long long int arr_195 [14] [14] ;
unsigned long long int arr_196 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_202 [14] ;
unsigned long long int arr_206 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_207 [14] [14] [14] [14] [14] ;
unsigned long long int arr_209 [14] [14] [14] [14] [14] ;
unsigned long long int arr_210 [14] [14] ;
unsigned long long int arr_221 [14] ;
unsigned long long int arr_223 [14] ;
unsigned long long int arr_224 [14] [14] [14] ;
unsigned long long int arr_235 [14] [14] [14] [14] ;
unsigned long long int arr_245 [14] [14] ;
unsigned long long int arr_250 [14] [14] [14] [14] ;
unsigned long long int arr_269 [14] [14] [14] [14] [14] ;
unsigned long long int arr_290 [14] [14] [14] [14] [14] ;
unsigned long long int arr_316 [22] ;
unsigned long long int arr_317 [22] [22] ;
unsigned long long int arr_318 [22] [22] ;
unsigned long long int arr_322 [22] [22] [22] ;
unsigned long long int arr_330 [22] [22] ;
unsigned long long int arr_332 [22] [22] [22] [22] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned long long int arr_6 [14] [14] [14] ;
unsigned long long int arr_13 [14] [14] [14] [14] ;
unsigned long long int arr_14 [14] [14] ;
unsigned long long int arr_15 [14] ;
unsigned long long int arr_16 [14] ;
unsigned long long int arr_36 [14] [14] [14] [14] [14] ;
unsigned long long int arr_39 [14] [14] [14] [14] [14] ;
unsigned long long int arr_40 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_62 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_67 [14] [14] [14] [14] ;
unsigned long long int arr_73 [14] [14] [14] [14] ;
unsigned long long int arr_74 [14] ;
unsigned long long int arr_79 [14] [14] [14] [14] ;
unsigned long long int arr_86 [14] [14] ;
unsigned long long int arr_87 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_90 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_91 [14] ;
unsigned long long int arr_92 [14] [14] [14] ;
unsigned long long int arr_93 [14] [14] [14] [14] ;
unsigned long long int arr_100 [14] [14] [14] [14] ;
unsigned long long int arr_101 [14] [14] [14] ;
unsigned long long int arr_108 [14] [14] [14] [14] [14] ;
unsigned long long int arr_120 [14] [14] [14] [14] [14] ;
unsigned long long int arr_121 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_122 [14] [14] [14] [14] ;
unsigned long long int arr_123 [14] [14] [14] [14] ;
unsigned long long int arr_126 [14] [14] [14] [14] ;
unsigned long long int arr_133 [14] [14] [14] [14] [14] ;
unsigned long long int arr_134 [14] [14] ;
unsigned long long int arr_137 [14] [14] [14] [14] [14] ;
unsigned long long int arr_148 [14] [14] [14] [14] [14] ;
unsigned long long int arr_154 [14] [14] [14] [14] ;
unsigned long long int arr_155 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_156 [14] [14] [14] [14] [14] ;
unsigned long long int arr_160 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_166 [14] [14] [14] [14] [14] ;
unsigned long long int arr_175 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_178 [14] [14] [14] [14] ;
unsigned long long int arr_181 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_189 [14] [14] [14] [14] [14] ;
unsigned long long int arr_190 [14] [14] [14] [14] [14] ;
unsigned long long int arr_193 [14] [14] ;
unsigned long long int arr_194 [14] ;
unsigned long long int arr_198 [14] [14] [14] [14] [14] ;
unsigned long long int arr_204 [14] [14] [14] [14] [14] ;
unsigned long long int arr_208 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_211 [14] [14] [14] [14] [14] ;
unsigned long long int arr_215 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_218 [14] ;
unsigned long long int arr_230 [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_233 [14] [14] [14] [14] ;
unsigned long long int arr_237 [14] [14] [14] [14] [14] ;
unsigned long long int arr_243 [14] ;
unsigned long long int arr_248 [14] [14] [14] ;
unsigned long long int arr_258 [14] [14] [14] [14] ;
unsigned long long int arr_259 [14] [14] [14] ;
unsigned long long int arr_263 [14] [14] [14] [14] [14] ;
unsigned long long int arr_267 [14] [14] [14] [14] ;
unsigned long long int arr_270 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_275 [14] [14] [14] [14] [14] [14] [14] ;
unsigned long long int arr_276 [14] ;
unsigned long long int arr_282 [14] [14] [14] [14] [14] ;
unsigned long long int arr_286 [14] [14] [14] [14] [14] ;
unsigned long long int arr_291 [14] [14] [14] [14] [14] ;
unsigned long long int arr_292 [14] [14] [14] [14] [14] ;
unsigned long long int arr_297 [14] [14] ;
unsigned long long int arr_304 [14] [14] [14] [14] ;
unsigned long long int arr_308 [14] [14] [14] [14] ;
unsigned long long int arr_309 [14] [14] [14] [14] ;
unsigned long long int arr_312 [14] [14] [14] [14] ;
unsigned long long int arr_313 [14] ;
unsigned long long int arr_319 [22] ;
unsigned long long int arr_326 [22] ;
unsigned long long int arr_327 [22] [22] ;
unsigned long long int arr_328 [22] ;
unsigned long long int arr_341 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 16166759768667273346ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 14658476123572385416ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 11856802691808847026ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 18322804610617906052ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 16865990660150328524ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 1166614428947482983ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 13906534064695102714ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1517883580663606834ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2506341158259204855ULL : 14348247615243051466ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 11942551631661486051ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2393672417708829127ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 2441056975071537921ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 15611359608465696870ULL : 188046041865061957ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1654353775478039624ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 17686468252630791114ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 11758985405107980363ULL : 5895061580895388076ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 14188835943281454851ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 9761600690838372505ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = 1970188478998383799ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = 5074782578314390080ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = 13939326032774932792ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 18333983896069474589ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_33 [i_0] = 1149460773575927657ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 17504444144955042561ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = 2406526520635145223ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1940217663708319429ULL : 7893494116220277539ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = 3390740695318685673ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = 7632772463853892347ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = 13574162800230148662ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_45 [i_0] [i_1] = 11580689887649409760ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = 914714758216588851ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_48 [i_0] [i_1] = 16535032432395546684ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = 17932252415703911754ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2593869554794647565ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = 12258603773496911605ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 4787639670892249241ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = 9925159992677822749ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = 18249296550146597457ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11633203933508472658ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = 5271632494470864048ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = 5940643357285231674ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = 2110215384314970524ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_65 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 11438293960142946310ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 16580809323642561077ULL : 1459909425208617855ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = 3191463758468676142ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_71 [i_0] = 14614988354062987964ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_72 [i_0] [i_1] [i_2] [i_3] = 5796437732158182907ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_77 [i_0] [i_1] = 16750441091560253372ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9203047966450660645ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_84 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 2451146620581827214ULL : 5549126960774965918ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_85 [i_0] [i_1] = 15262556389059011818ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_89 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 11029443026410221593ULL : 9667823850041496363ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_94 [i_0] [i_1] [i_2] [i_3] = 17856542434002642934ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_95 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14283276457510251328ULL : 8366381133727981650ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_99 [i_0] [i_1] = (i_0 % 2 == 0) ? 9563264792508800032ULL : 2756365339422129896ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_103 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 6151483963038236508ULL : 18045261911457687290ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_104 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 11619983932810852646ULL : 12594000211634955151ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_105 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17364031105104842191ULL : 12603742614925389945ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_106 [i_0] [i_1] [i_2] [i_3] [i_4] = 1581886756853531246ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_111 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 15005900465075310973ULL : 2585277279709196091ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_112 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4049549209448461629ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_114 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 16341514468578258240ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_116 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11773994714777019947ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_118 [i_0] [i_1] [i_2] [i_3] = 2927942475051476693ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_129 [i_0] [i_1] [i_2] [i_3] = 17877930099626414081ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_130 [i_0] [i_1] = 14563952180524095756ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_132 [i_0] [i_1] = (i_0 % 2 == 0) ? 9325537955962787203ULL : 7302054546518705233ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_135 [i_0] [i_1] [i_2] = 10870413133116027791ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_138 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 11895566880421886615ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_139 [i_0] [i_1] [i_2] [i_3] [i_4] = 7029307479555317698ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_142 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 6144060240989921717ULL : 6014740982089700857ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_143 [i_0] [i_1] [i_2] [i_3] [i_4] = 4230760590777951852ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_145 [i_0] [i_1] = 15992410415743339035ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_146 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7716772730484562874ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_147 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 10589558439211655900ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_152 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12527574825727715600ULL : 4032416385790927501ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_168 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 14265983110012085045ULL : 5148050035062984052ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_172 [i_0] [i_1] = 1263440630078188058ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_182 [i_0] = 9230292677235900943ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_184 [i_0] [i_1] [i_2] [i_3] [i_4] = 17329256815488231339ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_188 [i_0] [i_1] [i_2] [i_3] = 4356790856493994930ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_192 [i_0] [i_1] [i_2] [i_3] = 8802978039028332710ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_195 [i_0] [i_1] = 17425829686411327952ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_196 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 3242238238193044185ULL : 9430041150611400703ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_202 [i_0] = 4646630337269078778ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_206 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 15568032291845213515ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_207 [i_0] [i_1] [i_2] [i_3] [i_4] = 16928864466174355721ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_209 [i_0] [i_1] [i_2] [i_3] [i_4] = 4675321035585244727ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_210 [i_0] [i_1] = 13594823460574560387ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_221 [i_0] = 6514448780163505739ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_223 [i_0] = 5976584304954707993ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_224 [i_0] [i_1] [i_2] = 10425959112711088717ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_235 [i_0] [i_1] [i_2] [i_3] = 17282048218152011106ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_245 [i_0] [i_1] = 14509713667601588686ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_250 [i_0] [i_1] [i_2] [i_3] = 5251458461556066771ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_269 [i_0] [i_1] [i_2] [i_3] [i_4] = 13495139179456319103ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_290 [i_0] [i_1] [i_2] [i_3] [i_4] = 7923208496240566965ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_316 [i_0] = 6764372184086026593ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_317 [i_0] [i_1] = 4816653291414005591ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_318 [i_0] [i_1] = 7972206740333986172ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_322 [i_0] [i_1] [i_2] = 16594478470980517060ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_330 [i_0] [i_1] = 12522438665618769712ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_332 [i_0] [i_1] [i_2] [i_3] = 9322396425831734348ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2436046498283914482ULL : 13639175505168238532ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3443563331922426859ULL : 15462058316061995714ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 15095670745643050706ULL : 4872584838269107692ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 9710568967953709138ULL : 10256048538960353067ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 6589191271704336787ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 14472694141105754470ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 16465290057175597965ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 11270186345694357573ULL : 6750145536964866306ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 1602674428329729629ULL : 5333060463219565353ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 9693764045495262099ULL : 3592813899370305273ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = 7475448123546212875ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 12184199151963365992ULL : 16149628831987700357ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? 8572088075442695524ULL : 5235925718684210653ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_79 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 15933263965383503343ULL : 9353253632673744621ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_86 [i_0] [i_1] = (i_1 % 2 == 0) ? 14898634850096478424ULL : 13869004373822194072ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_87 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 10141503269403251108ULL : 7132865801624472063ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 14155888636868710249ULL : 12424079056156262351ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_91 [i_0] = (i_0 % 2 == 0) ? 16325147308283539716ULL : 12814184553970597769ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_92 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14126233128142475142ULL : 8607186286528147601ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_93 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 14778677048509283898ULL : 2364986398389777504ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_100 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4369248259945404587ULL : 13319323967214749503ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_101 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15560784318482840898ULL : 16500904947994295946ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_108 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 12587026209372897313ULL : 14819014888771011731ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_120 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 15913424309501155226ULL : 9216187908762843667ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_121 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 4784109251455515953ULL : 5770065388438332034ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_122 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 17454773082149999018ULL : 6808461052037627645ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_123 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 13090573767626208752ULL : 2857769201774958705ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_126 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7954911415531956888ULL : 7158756173443791741ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_133 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 14466407714199461922ULL : 7782378742071007179ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_134 [i_0] [i_1] = (i_0 % 2 == 0) ? 4086174786243691324ULL : 5184558941811015112ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_137 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 8900429221027174389ULL : 620130604575244952ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_148 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 3982231925134330354ULL : 12160049160840189051ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_154 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11521058158977750487ULL : 14404833154189314758ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_155 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 14589675590676359041ULL : 10626682338360374290ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_156 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 16931533564342496795ULL : 6462244782934269676ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_160 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 1231849921377715210ULL : 7514950605321962895ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_166 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 2759681147924623060ULL : 8750897670991807398ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_175 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 1096054626263675809ULL : 12117797337826936480ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_178 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 17061948306403707351ULL : 4563415533954750893ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_181 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 2012906698525724088ULL : 10209566470464221424ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_189 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 9404122952119288017ULL : 16212366998541880431ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_190 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 8017579084477409909ULL : 1480574010149785247ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_193 [i_0] [i_1] = (i_0 % 2 == 0) ? 7669862133712108580ULL : 8010189709349382844ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_194 [i_0] = (i_0 % 2 == 0) ? 14008542117100813926ULL : 7798837180039464178ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_198 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 14902792870385897329ULL : 1135798713266088893ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_204 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 7114725476124225452ULL : 2909271882190644214ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_208 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 6735834002276111638ULL : 13762767305702249868ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_211 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 10067312081101751909ULL : 100254268940446470ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_215 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 3273512710328361174ULL : 15653828737047395265ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_218 [i_0] = (i_0 % 2 == 0) ? 6157781966011914735ULL : 12732740534242137358ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_230 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16685502684032852984ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_233 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6505249557509138701ULL : 7803646067278033986ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_237 [i_0] [i_1] [i_2] [i_3] [i_4] = 2369273062046241808ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_243 [i_0] = 10571181261876205988ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_248 [i_0] [i_1] [i_2] = 16328543716318920840ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_258 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 544111361897196815ULL : 3202772222126942804ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_259 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6388539050705914717ULL : 9365183114496075796ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_263 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 7853533174699001917ULL : 2177742430838675687ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_267 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3136443031863700617ULL : 6681030857305521376ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_270 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 5435585787396270166ULL : 9058957199999588226ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_275 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 4600195468088664519ULL : 4322959679870862415ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_276 [i_0] = (i_0 % 2 == 0) ? 12273714402664724549ULL : 2526084689997735730ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_282 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 7228894327084962124ULL : 10315026174322089282ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_286 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 10410646706452789982ULL : 5150379749699627396ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_291 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 10658495893586792418ULL : 7732403198932039577ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_292 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 15328882384818455ULL : 6564825535970994443ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_297 [i_0] [i_1] = (i_1 % 2 == 0) ? 7566866301686473803ULL : 12222293562073772953ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_304 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4415020093002108093ULL : 12778851488522115807ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_308 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 12289023794011507217ULL : 980979320642025769ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_309 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 3899720570154097992ULL : 6326744408891981695ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_312 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1547255564809297633ULL : 10749300593987836848ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_313 [i_0] = (i_0 % 2 == 0) ? 11460909230993235497ULL : 15069447142562612167ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_319 [i_0] = 12952263597091208060ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_326 [i_0] = 7111201435828763102ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_327 [i_0] [i_1] = 15581259340801802831ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_328 [i_0] = 18156492645333500239ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_341 [i_0] = 4245534205207113084ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
    hash(&seed, var_98);
    hash(&seed, var_99);
    hash(&seed, var_100);
    hash(&seed, var_101);
    hash(&seed, var_102);
    hash(&seed, var_103);
    hash(&seed, var_104);
    hash(&seed, var_105);
    hash(&seed, var_106);
    hash(&seed, var_107);
    hash(&seed, var_108);
    hash(&seed, var_109);
    hash(&seed, var_110);
    hash(&seed, var_111);
    hash(&seed, var_112);
    hash(&seed, var_113);
    hash(&seed, var_114);
    hash(&seed, var_115);
    hash(&seed, var_116);
    hash(&seed, var_117);
    hash(&seed, var_118);
    hash(&seed, var_119);
    hash(&seed, var_120);
    hash(&seed, var_121);
    hash(&seed, var_122);
    hash(&seed, var_123);
    hash(&seed, var_124);
    hash(&seed, var_125);
    hash(&seed, var_126);
    hash(&seed, var_127);
    hash(&seed, var_128);
    hash(&seed, var_129);
    hash(&seed, var_130);
    hash(&seed, var_131);
    hash(&seed, var_132);
    hash(&seed, var_133);
    hash(&seed, var_134);
    hash(&seed, var_135);
    hash(&seed, var_136);
    hash(&seed, var_137);
    hash(&seed, var_138);
    hash(&seed, var_139);
    hash(&seed, var_140);
    hash(&seed, var_141);
    hash(&seed, var_142);
    hash(&seed, var_143);
    hash(&seed, var_144);
    hash(&seed, var_145);
    hash(&seed, var_146);
    hash(&seed, var_147);
    hash(&seed, var_148);
    hash(&seed, var_149);
    hash(&seed, var_150);
    hash(&seed, var_151);
    hash(&seed, var_152);
    hash(&seed, var_153);
    hash(&seed, var_154);
    hash(&seed, var_155);
    hash(&seed, var_156);
    hash(&seed, var_157);
    hash(&seed, var_158);
    hash(&seed, var_159);
    hash(&seed, var_160);
    hash(&seed, var_161);
    hash(&seed, var_162);
    hash(&seed, var_163);
    hash(&seed, var_164);
    hash(&seed, var_165);
    hash(&seed, var_166);
    hash(&seed, var_167);
    hash(&seed, var_168);
    hash(&seed, var_169);
    hash(&seed, var_170);
    hash(&seed, var_171);
    hash(&seed, var_172);
    hash(&seed, var_173);
    hash(&seed, var_174);
    hash(&seed, var_175);
    hash(&seed, var_176);
    hash(&seed, var_177);
    hash(&seed, var_178);
    hash(&seed, var_179);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_73 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_79 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_86 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_87 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_90 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_91 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_92 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_93 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_101 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_108 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_120 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_121 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_122 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_123 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_126 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_133 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_134 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_137 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_148 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_154 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_155 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_156 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_160 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_166 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_175 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_178 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_181 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_189 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_190 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_193 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_194 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_198 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_204 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_208 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_211 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_215 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_218 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_230 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_233 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_237 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_243 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_248 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_258 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_259 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_263 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_267 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_270 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_275 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_276 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_282 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_286 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_291 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_292 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_297 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_304 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_308 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_309 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_312 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_313 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_319 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_326 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_327 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_328 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_341 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
